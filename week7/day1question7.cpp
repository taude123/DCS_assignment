#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void reverseList(Node*& head)
{
    Node* prev = nullptr;
    Node* curr = head;

    while(curr != nullptr)
    {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

int main()
{
    Node a{1,nullptr}, b{2,nullptr};
    a.next = &b;
    Node* head = &a;

    reverseList(head);
    cout << head->data;
    return 0;
}
