#include <iostream>
using namespace std;

int main()
{
    int q[] = {5, 15, 25};
    int front = 0, rear = 2;

    for(int i = front; i <= rear; i++)
        cout << q[i] << " ";

    return 0;
}
