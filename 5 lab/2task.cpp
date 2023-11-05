#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 10000001

class Stack
{
    int *arr;
    int top;
    int capacity;

public:
    Stack(int size = SIZE);
    ~Stack();

    void push(int);
    int pop();
    int peek();

    int size();
    bool isEmpty();
    bool isFull();
};

Stack::Stack(int size)
{
    arr = new int[size];
    capacity = size;
    top = -1;
}

Stack::~Stack()
{
    delete[] arr;
}

void Stack::push(int x)
{
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    arr[++top] = x;
}

int Stack::pop()
{
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    return arr[top--];
}

int Stack::peek()
{
    if (!isEmpty())
    {
        return arr[top];
    }
    else
    {
        exit(EXIT_FAILURE);
    }
}

int Stack::size()
{
    return top + 1;
}

bool Stack::isEmpty()
{
    return top == -1;
}

bool Stack::isFull()
{
    return top == capacity - 1;
}

int main()
{
    int n;
    cin >> n;

    Stack stack;
    Stack minStack;

    for (int i = 0; i < n; i++)
    {
        int operation;
        cin >> operation;

        if (operation == 1)
        {
            int x;
            cin >> x;
            stack.push(x);
            if (minStack.isEmpty() || x <= minStack.peek())
            {
                minStack.push(x);
            }
        }
        else if (operation == 2)
        {
            int removed = stack.pop();
            if (removed == minStack.peek())
            {
                minStack.pop();
            }
        }
        else if (operation == 3)
        {
            cout << minStack.peek() << endl;
        }
    }

    return 0;
}
