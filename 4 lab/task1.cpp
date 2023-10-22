#include <iostream>
#include <string>
using namespace std;
string addStarsBetweenLetters(const string &s)
{

    if (s.length() == 1)
    {
        return s;
    }

    return s.substr(0, 1) + "*" + addStarsBetweenLetters(s.substr(1));
}

int main()
{
    string input_string;
    cin >> input_string;

    string result_string = addStarsBetweenLetters(input_string);
    cout << result_string << endl;

    return 0;
}
