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

    // Вывод элементов стека
    if (!mystack.empty())
    {
        cout << mystack << endl;
    }
    else
    {
        cout << "Stack is empty." << endl;
    }

    // Попытка добавления элемента в полный стек
    if (!mystack.full())
    {
        mystack.push(6);
    }
    else
    {
        cout << "Stack is full. Cannot push." << endl;
    }

    // Очищение стека – удаление всех элементов
    while (!mystack.empty())
    {
        mystack.pop();
    }

    // Вывод элементов стека после очистки
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
