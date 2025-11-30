#include <iostream>
using namespace std;

int fibTail(int n, int a = 0, int b = 1) {
    if (n == 0) return a;
    return fibTail(n - 1, b, a + b);
}

int main() {
    cout << endl;  

    int n;
    cin >> n;
    cout << fibTail(n);
    cout << endl;  
    cout << endl;  
    return 0;
}
