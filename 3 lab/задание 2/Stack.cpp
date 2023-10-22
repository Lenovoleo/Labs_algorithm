#include "ListNode.h"
#include <iostream>

using namespace std;

template <typename T>
class Stack
{
private:
    ListNode<T> *first;
    int n;
    int max_size;

public:
    // Constructor: initialize an empty stack with a given maximum size
    Stack(int max_size) : first(nullptr), n(0), max_size(max_size) {}

    bool empty() const
    {
        return n == 0;
    }

    bool full() const
    {
        return n == max_size;
    }

    int size() const
    {
        return n;
    }

    // Add an element to the stack
    void push(const T &item)
    {
        if (full())
        {
            cout << "Error: Stack is full." << endl;
            return;
        }

        ListNode<T> *newNode = new ListNode<T>(item, first);
        first = newNode;
        n++;
    }

    // Remove the top element from the stack and return its value
    T pop()
    {
        if (empty())
        {
            cout << "Error: Stack is empty." << endl;
            return T();
        }

        T value = first->val;
        ListNode<T> *temp = first;
        first = first->next;
        delete temp;
        n--;
        return value;
    }

    T top() const
    {
        if (empty())
        {
            cout << "Error: Stack is empty." << endl;
            return T();
        }
        return first->val;
    }

    // Overload the << operator to display stack elements using cout
    friend ostream &operator<<(ostream &os, const Stack &st)
    {
        ListNode<T> *current = st.first;
        while (current != nullptr)
        {
            os << current->val << " ";
            current = current->next;
        }
        return os;
    }
};