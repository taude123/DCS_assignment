#include <iostream>
using namespace std;

#define SIZE 5
int q[SIZE], front = -1, rear = -1;

int main()
{
    front = rear = 0;
    q[rear] = 10;
    cout << q[rear];
    return 0;
}
