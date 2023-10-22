#include <iostream>
#include <string>
using namespace std;

int countDigits(const string &str, int index)
{
    if (index < str.length())
    {
        if (isdigit(str[index]))
        {
            return 1 + countDigits(str, index + 1);
        }
        return countDigits(str, index + 1);
    }
    return 0;
}

int main()
{
    string str;
    getline(cin, str);

    int result = countDigits(str, 0);
    cout << result << endl;

    return 0;
}
