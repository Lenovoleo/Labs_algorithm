#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isBalanced(const string &s)
{
    stack<char> st;

    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            if (st.empty())
            {
                return false; // Нет соответствующей открывающей скобки
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
            {
                return false; // Скобки не совпадают
            }
        }
    }

    return st.empty();
}

int main()
{
    string s;
    cin >> s;

    if (isBalanced(s))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
