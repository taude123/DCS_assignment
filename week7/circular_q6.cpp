#include <iostream>
using namespace std;

#define SIZE 5

int main()
{
    int front = 0, rear = 4;

    if((rear + 1) % SIZE == front)
        cout << "Queue Full";

    front = -1;
    if(front == -1)
        cout << "\nQueue Empty";

    return 0;
}
