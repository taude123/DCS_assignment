#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int countNodes(Node* head)
{
    int count = 0;
    while(head != nullptr)
    {
        count++;
        head = head->next;
    }
    return count;
}

int main()
{
    Node a{1,nullptr}, b{2,nullptr};
    a.next = &b;

    cout << countNodes(&a);
    return 0;
}
