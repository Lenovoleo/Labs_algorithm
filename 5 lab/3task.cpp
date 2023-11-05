#include <iostream>
#include <stack>
using namespace std;

class Queue
{
private:
    stack<int> stackFirst;
    stack<int> stackSecond;

public:
    void enqueue(int x)
    {
        stackFirst.push(x);
    }
    void dequeue()
    {
        if (stackSecond.empty())
        {
            while (!stackFirst.empty())
            {
                stackSecond.push(move(stackFirst.top()));
                stackFirst.pop();
            }
        }
        stackSecond.pop();
    }

    int frontElement()
    {
        if (stackSecond.empty())
        {
            while (!stackFirst.empty())
            {
                stackSecond.push(stackFirst.top());
                stackFirst.pop();
            }
        }
        return stackSecond.top();
    }
};

int main()
{
    int n;
    cin >> n;

    Queue queueIn2Stacks;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if (val == 1)
        {
            int x;
            cin >> x;
            queueIn2Stacks.enqueue(x);
        }
        else if (val == 2)
        {
            queueIn2Stacks.dequeue();
        }
        else if (val == 3)
        {
            cout << queueIn2Stacks.frontElement() << endl;
        }
    }

    return 0;
}
