#include <iostream>
#include <string>
using namespace std;

int findMaxDigitRecursive(const string &s, int index = 0, int maxDigit = -1)
{

    if (index == s.length())
    {
        return maxDigit;
    }

    int currentDigit = s[index] - '0';

    if (maxDigit == -1 || currentDigit > maxDigit)
    {
        maxDigit = currentDigit;
    }

    return findMaxDigitRecursive(s, index + 1, maxDigit);
}

int main()
{
    string input_string;
    cin >> input_string;

    int max_digit = findMaxDigitRecursive(input_string);

    cout << max_digit << endl;

    return 0;
}
