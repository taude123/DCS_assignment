#include <iostream>
using namespace std;

#define SIZE 5
int q[SIZE], front = 0, rear = 0;

void enqueue(int x)
{
    rear = (rear + 1) % SIZE;
    q[rear] = x;
}

int main()
{
    q[0] = 10;
    enqueue(20);

    cout << q[0] << " " << q[1];
    return 0;
}
