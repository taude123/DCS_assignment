#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 1;    // Assignment

    for (int i = n; i >= 1; i /= 2) {
        x = x * 2;    // Arithmetic operation
    }

    cout << x << endl;    // Output
    return 0;
}