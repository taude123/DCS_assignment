#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Iterative search function
Node* searchIterative(Node* root, int key) {
    while (root != nullptr) {
        if (key == root->data)
            return root;
        else if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return nullptr;
}

int main() {
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    Node* result = searchIterative(root, key);
    if (result)
        cout << "Key found: " << result->data << endl;
    else
        cout << "Key not found" << endl;

    return 0;
}