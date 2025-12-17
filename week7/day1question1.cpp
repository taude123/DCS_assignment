#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createList(int arr[], int n)
{
    Node* head = nullptr;
    Node* tail = nullptr;

    for(int i = 0; i < n; i++)
    {
        Node* newNode = new Node;
        newNode->data = arr[i];
        newNode->next = nullptr;

        if(head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void traverse(Node* head)
{
    while(head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

/* MINIMUM MAIN (only to avoid error) */
int main()
{
    int arr[] = {10, 20, 30};
    int n = 3;

    Node* head = createList(arr, n);
    traverse(head);

    return 0;
}
