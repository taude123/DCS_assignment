#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 1;    // Assignment

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            x++;    // Arithmetic operation

    cout << x << endl;    // Output
    return 0;
}