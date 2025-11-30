#include <iostream>
using namespace std;

long long powerTail(int a, int b, long long result = 1) {
    if (b == 0) return result;
    return powerTail(a, b - 1, result * a);
}

int main() {
    cout << endl; 

    int a, b;
    cin >> a >> b;
    cout << powerTail(a, b);
    cout << endl; 
    cout << endl; 
    return 0;
}
