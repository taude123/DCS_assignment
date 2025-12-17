#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertBegin(Node*& head, int value)
{
    Node* newNode = new Node{value, head};
    head = newNode;
}

int main()
{
    Node* head = nullptr;
    insertBegin(head, 5);
    cout << head->data;
    return 0;
}
