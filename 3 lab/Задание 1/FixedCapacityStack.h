// FixedCapacityStack.h

#ifndef FIXEDCAPACITYSTACK_H
#define FIXEDCAPACITYSTACK_H

#include <iostream>

template <typename T>
class FixedCapacityStack
{
private:
    T *a;         // Массив, содержащий элементы стека
    int n;        // Количество элементов в стеке
    int capacity; // Максимальный размер стека

public:
    // Конструктор: создать пустой массив с размером capacity
    FixedCapacityStack(int capacity);

    // Деструктор: освободить память массива (delete)
    ~FixedCapacityStack();

    // Проверка на пустоту стека
    bool empty() const;

    // Проверка на полноту стека
    bool full() const;

    // Добавить элемент в стек
    void push(T item);

    // Удалить вершину стека
    T pop();

    // Вернуть значение вершины стека
    T top() const;

    // Перегрузка оператора << для вывода элементов стека через cout
    friend std::ostream &operator<<(std::ostream &os, const FixedCapacityStack<T> &st)
    {
        for (int i = st.n - 1; i >= 0; --i)
        {
            os << st.a[i] << "\n";
        }
        return os;
    };
};

#endif // FIXEDCAPACITYSTACK_H
