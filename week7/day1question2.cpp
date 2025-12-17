#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int search(Node* head, int x)
{
    int pos = 1;
    while(head != nullptr)
    {
        if(head->data == x)
            return pos;
        head = head->next;
        pos++;
    }
    return -1;
}

int main()
{
    Node a{10, nullptr}, b{20, nullptr};
    a.next = &b;

    cout << search(&a, 20);
    return 0;
}
