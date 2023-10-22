// ListNode.h

#ifndef LISTNODE_H
#define LISTNODE_H

template <typename T>
class ListNode
{
public:
    T val;
    ListNode *next;
    // »нициализаци€ конструктора без параметров
    ListNode();
    //  онструктор с параметром данных
    ListNode(T);
    //  онструктор с параметром данных и указателем на следующий элемент списка
    ListNode(T, ListNode *);
};

#endif // LISTNODE_H