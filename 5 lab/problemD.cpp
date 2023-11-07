#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*';
}

long long postEval(string str)
{
    vector<int> numbers;
    int start = 0;

    for (int end = 0; end <= str.length(); end++)
    {
        if (end == str.length() || str[end] == ' ')
        {
            if (start < end)
            {
                string num_str = str.substr(start, end - start);
                if (!num_str.empty())
                {
                    if (isOperator(num_str[0]) && num_str.length() == 1)
                    {

                        numbers.push_back(-num_str[0]);
                    }
                    else
                    {
                        try
                        {
                            int number = stoi(num_str);
                            numbers.push_back(number);
                        }
                        catch (const invalid_argument &e)
                        {

                            return 0;
                        }
                    }
                }
            }
            start = end + 1;
        }
    }

    stack<long long> stackOfNumbers;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] >= 0)
        {
            stackOfNumbers.push(numbers[i]);
        }
        else
        {
            int secondOp = stackOfNumbers.top();
            stackOfNumbers.pop();
            int firstOp = stackOfNumbers.top();
            stackOfNumbers.pop();

            switch (-numbers[i])
            {
            case '+':
                stackOfNumbers.push(firstOp + secondOp);
                break;
            case '-':
                stackOfNumbers.push(firstOp - secondOp);
                break;
            case '*':
                stackOfNumbers.push(firstOp * secondOp);
                break;
            }
        }
    }

    return stackOfNumbers.top();
}

int main()
{
    string s;
    getline(cin, s);
    if (s.size() > 100)
    {
        return 0;
    }
    int result = postEval(s);
    if (result != 0)
    {
        cout << result << endl;
    }
    return 0;
}
