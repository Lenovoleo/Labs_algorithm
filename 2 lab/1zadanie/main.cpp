#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class MyLinkedList {
public:
    MyLinkedList() : head(nullptr), size(0) {}
    size_t get_size() { return size; }


    void add_at_head(int val) {
        ListNode* new_node = new ListNode(val);
        new_node->next = head;
        head = new_node;
        size++;
    }

private:
    ListNode* head;
    size_t size;
};

int main() {
    setlocale(LC_ALL, "rus");
    int N;
    cout<<"Введите размерность массива"<<endl;
    cin>>N;
    int arr[N];
    cout<<"Введитее элементы"<<endl;
    for(int i = 0; i<N ; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Элементы"<<endl;
    for(int i = 0; i<N ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    MyLinkedList obj;

    cout << "Добавление элементов в начало списка:" << endl;
    for (int val : arr) {
        obj.add_at_head(val);
        cout<<val<< " ";
    }
    cout<<endl;

    cout << "Размер списка: " << obj.get_size() << endl;

    return 0;

}
