// FixedCapacityStack.h

#ifndef FIXEDCAPACITYSTACK_H
#define FIXEDCAPACITYSTACK_H

#include <iostream>

template <typename T>
class FixedCapacityStack
{
private:
    T *a;         // ������, ���������� �������� �����
    int n;        // ���������� ��������� � �����
    int capacity; // ������������ ������ �����

public:
    // �����������: ������� ������ ������ � �������� capacity
    FixedCapacityStack(int capacity);

    // ����������: ���������� ������ ������� (delete)
    ~FixedCapacityStack();

    // �������� �� ������� �����
    bool empty() const;

    // �������� �� ������� �����
    bool full() const;

    // �������� ������� � ����
    void push(T item);

    // ������� ������� �����
    T pop();

    // ������� �������� ������� �����
    T top() const;

    // ���������� ��������� << ��� ������ ��������� ����� ����� cout
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
