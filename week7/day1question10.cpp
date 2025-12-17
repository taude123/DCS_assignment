#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printReverse(Node* head)
{
    if(head == nullptr) return;
    printReverse(head->next);
    cout << head->data << " ";
}

int main()
{
    Node a{1,nullptr}, b{2,nullptr};
    a.next = &b;

    printReverse(&a);
    return 0;
}
