#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteByValue(Node*& head, int x)
{
    if(head == nullptr) return;

    if(head->data == x)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* curr = head;
    while(curr->next != nullptr && curr->next->data != x)
        curr = curr->next;

    if(curr->next != nullptr)
    {
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
}

int main()
{
    Node a{10,nullptr}, b{20,nullptr};
    a.next = &b;
    Node* head = &a;

    deleteByValue(head, 20);
    cout << head->data;
    return 0;
}
