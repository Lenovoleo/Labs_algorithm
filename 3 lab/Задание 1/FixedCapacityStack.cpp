// FixedCapacityStack.cpp

#include "FixedCapacityStack.h"
#include <stdexcept>

using namespace std;
template <typename T>
FixedCapacityStack<T>::FixedCapacityStack(int capacity)
{
    this->capacity = capacity;
    this->a = new T[capacity];
    this->n = 0;
}

template <typename T>
FixedCapacityStack<T>::~FixedCapacityStack()
{
    delete[] a;
}

template <typename T>
bool FixedCapacityStack<T>::empty() const
{
    return n == 0;
}

template <typename T>
bool FixedCapacityStack<T>::full() const
{
    return n == capacity;
}

template <typename T>
void FixedCapacityStack<T>::push(T item)
{
    if (full())
    {
        throw runtime_error("Stack is full");
    }
    a[n++] = item;
}

template <typename T>
T FixedCapacityStack<T>::pop()
{
    if (empty())
    {
        throw runtime_error("Stack is empty");
    }
    return a[--n];
}

template <typename T>
T FixedCapacityStack<T>::top() const
{
    if (empty())
    {
        throw runtime_error("Stack is empty");
    }
    return a[n - 1];
}

template <typename T>
ostream &operator<<(ostream &os, const FixedCapacityStack<T> &st)
{
    for (int i = st.n - 1; i >= 0; --i)
    {
        os << st.a[i] << "\n";
    }
    return os;
}
