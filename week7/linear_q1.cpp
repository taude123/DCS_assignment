#include <iostream>
using namespace std;

#define SIZE 5
int q[SIZE], front = -1, rear = -1;

int main()
{
    // enqueue
    rear = 0;
    front = 0;
    q[rear] = 10;

    rear++;
    q[rear] = 20;

    // display
    for(int i = front; i <= rear; i++)
        cout << q[i] << " ";

    return 0;
}
