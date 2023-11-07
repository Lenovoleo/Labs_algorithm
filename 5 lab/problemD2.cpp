#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int postMet(const string &str)
{
    stack<int> st;
    string area;

    for (char i : str)
    {
        if (isdigit(i))
        {
            area += i;
        }
        else if (i == ' ' && !area.empty())
        {
            st.push(stoi(area));
            area = "";
        }
        else if (i == '+' || i == '-' || i == '*')
        {
            if (st.size() < 2)
            {
                return -1;
            }
            int oper2 = st.top();
            st.pop();
            int oper1 = st.top();
            st.pop();

            int res;
            if (i == '+')
            {
                res = oper1 + oper2;
            }
            else if (i == '-')
            {
                res = oper1 - oper2;
            }
            else if (i == '*')
            {
                res = oper1 * oper2;
            }
            else
            {
                return -1;
            }
            st.push(res);
        }
    }

    if (!area.empty())
    {
        st.push(stoi(area));
    }
    if (st.size() != 1)
    {
        return -1;
    }

    return st.top();
}
int main()
{
    string str;
    getline(cin, str);
    int res = postMet(str);

    if (res != -1)
    {
        cout << res;
    }

    return 0;
}
