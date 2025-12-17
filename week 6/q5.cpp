#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 1;    // Assignment

    for (int i = 1; i <= n; i *= 2) {
        x = x + 1;    // Arithmetic operation
    }

    cout << x << endl;    // Output
    return 0;
}