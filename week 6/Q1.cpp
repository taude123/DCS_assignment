#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 5;    // Assignment

    for (int i = n - 2; i >= 1; i--) {
        x = x + 1;    // Arithmetic operation
    }

    for (int i = 0; i < n; i++) {
        if (i < n) { }    // Comparison
    }

    for (int i = 0; i < 6; i++) {
        x = 10;    // Constant-time assignment
    }

    cout << x << endl;    // Output
    return 0;
}