#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    cin >> x;    // Input

    for (int i = n; i >= 1; i -= 4) {
        x = x + 2;    // Arithmetic operation
    }

    cout << x << endl;    // Output
    return 0;
}