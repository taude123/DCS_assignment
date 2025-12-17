#include <iostream>
using namespace std;

#define SIZE 5
int q[SIZE], front = -1, rear = -1;

void enqueue(int x)
{
    if(rear == SIZE - 1)
        cout << "Queue Full";
    else
    {
        if(front == -1) front = 0;
        q[++rear] = x;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);

    for(int i = front; i <= rear; i++)
        cout << q[i] << " ";

    return 0;
}
