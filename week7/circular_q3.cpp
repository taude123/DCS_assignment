#include <iostream>
using namespace std;

#define SIZE 5
int q[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

int main()
{
    front = (front + 1) % SIZE;

    for(int i = front; i <= rear; i++)
        cout << q[i] << " ";

    return 0;
}
