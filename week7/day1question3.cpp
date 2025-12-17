#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node*& head, int value)
{
    Node* newNode = new Node{value, nullptr};

    if(head == nullptr)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
}

int main()
{
    Node* head = nullptr;
    insertEnd(head, 10);
    cout << head->data;
    return 0;
}
