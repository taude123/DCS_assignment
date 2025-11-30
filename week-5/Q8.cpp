#include <iostream>
using namespace std;

void reverseString(string &s, int left, int right) {
    if (left >= right) return;
    swap(s[left], s[right]);
    reverseString(s, left + 1, right - 1);
}

int main() {
    cout << endl;  

    string s;
    cin >> s;
    reverseString(s, 0, s.length() - 1);
    cout << s;
    cout << endl;  
    cout << endl;  
    return 0;
}
