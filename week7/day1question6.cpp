#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteAtPosition(Node*& head, int pos)
{
    if(pos == 1)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    Node a{10,nullptr}, b{20,nullptr};
    a.next = &b;
    Node* head = &a;

    deleteAtPosition(head, 1);
    cout << head->data;
    return 0;
}
