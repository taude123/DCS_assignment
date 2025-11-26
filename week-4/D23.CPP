#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    cout << "Enter matrix: ";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];

    cout << "Row sums: ";
    for (int i = 0; i < 3; i++) {
        int s = 0;
        for (int j = 0; j < 3; j++) s += arr[i][j];
        cout << s << " ";
    }

    cout << "\nColumn sums: ";
    for (int j = 0; j < 3; j++) {
        int s = 0;
        for (int i = 0; i < 3; i++) s += arr[i][j];
        cout << s << " ";
    }
}
