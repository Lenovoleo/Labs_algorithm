#include <iostream>
#include "FixedCapacityStack.h"
#include "FixedCapacityStack.cpp"
using namespace std;

int main()
{
    FixedCapacityStack<int> mystack(5);

    for (int i = 1; i <= 5; ++i)
    {
        mystack.push(i);
    }

    // ����� ��������� �����
    if (!mystack.empty())
    {
        cout << mystack << endl;
    }
    else
    {
        cout << "Stack is empty." << endl;
    }

    // ������� ���������� �������� � ������ ����
    if (!mystack.full())
    {
        mystack.push(6);
    }
    else
    {
        cout << "Stack is full. Cannot push." << endl;
    }

    // �������� ����� � �������� ���� ���������
    while (!mystack.empty())
    {
        mystack.pop();
    }

    // ����� ��������� ����� ����� �������
    if (!mystack.empty())
    {
        cout << mystack << endl;
    }
    else
    {
        cout << "Stack is empty." << endl;
    }

    return 0;
}
