#include <iostream>
using namespace std;

int main() {
    int n, arr[100], key;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter value to search: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found at index " << i;
            found = true;
            break;
        }
    }

    if (!found) cout << "Not found";
}
