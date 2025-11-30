#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    cout << endl;  

    int n;
    cin >> n;
    cout << fib(n);
    cout << endl;  
    cout << endl;  
    return 0;
}
