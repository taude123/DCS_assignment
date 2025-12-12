#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    cin >> x;    // Input

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                if (k < n) { }    // Comparison

    x = x + 1;    // Arithmetic operation

    for (int i = 0; i < n; i++)
        for (int j = 10; j >= 1; j--)
            x = 5;    // Assignment (constant loop)

    cout << x << endl;    // Output
    return 0;
}