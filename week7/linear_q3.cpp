#include <iostream>
using namespace std;

#define SIZE 5
int q[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

void dequeue()
{
    if(front > rear)
        cout << "Queue Empty";
    else
        front++;
}

int main()
{
    dequeue();

    for(int i = front; i <= rear; i++)
        cout << q[i] << " ";

    return 0;
}
