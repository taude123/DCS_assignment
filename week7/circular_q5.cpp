#include <iostream>
using namespace std;

#define SIZE 5

int main()
{
    int q[SIZE] = {1,2,3,0,0};
    int front = 0, rear = 2;

    int i = front;
    while(i != rear)
    {
        cout << q[i] << " ";
        i = (i + 1) % SIZE;
    }
    cout << q[rear];

    return 0;
}
