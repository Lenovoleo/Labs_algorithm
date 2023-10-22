// ListNode.h

#ifndef LISTNODE_H
#define LISTNODE_H

template <typename T>
class ListNode
{
public:
    T val;
    ListNode *next;
    // ������������� ������������ ��� ����������
    ListNode();
    // ����������� � ���������� ������
    ListNode(T);
    // ����������� � ���������� ������ � ���������� �� ��������� ������� ������
    ListNode(T, ListNode *);
};

#endif // LISTNODE_H