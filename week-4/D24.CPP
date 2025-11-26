#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    cout << "Enter matrix: ";

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];

    cout << "Largest in each row: ";
    for (int i = 0; i < 3; i++) {
        int mx = arr[i][0];
        for (int j = 1; j < 3; j++)
            if (arr[j][i] > mx) mx = arr[i][j];
        cout << mx << " ";
    }
}
