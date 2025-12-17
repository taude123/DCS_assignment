#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAfter(Node* head, int x, int y)
{
    while(head != nullptr)
    {
        if(head->data == x)
        {
            Node* newNode = new Node{y, head->next};
            head->next = newNode;
            return;
        }
        head = head->next;
    }
}

int main()
{
    Node a{10,nullptr};
    insertAfter(&a, 10, 20);
    cout << a.next->data;
    return 0;
}
