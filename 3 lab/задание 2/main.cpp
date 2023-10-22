#include "ListNode.h"
#include "ListNode.cpp"
#include "Stack.cpp"
#include <iostream>
using namespace std;
int main()
{
    Stack<int> intStack(5);

    for (int i = 1; i <= 5; ++i)
    {
        intStack.push(i * 2);
    }

    // Вывод элементов стека
    cout << "Integer Stack elements: " << intStack << endl;
    cout << "Top element: " << intStack.top() << endl;

    intStack.push(6); // Попытка добавить элемент в полный стек

    // Удаление элементов из стека и вывод их значений
    while (!intStack.empty())
    {
        int value = intStack.pop();
        cout << "Popped from Integer Stack: " << value << endl;
    }

    cout << "Integer Stack elements after popping: " << intStack << endl;

    return 0;
}