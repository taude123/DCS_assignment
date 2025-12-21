#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Recursive insertion
Node* insertRecursive(Node* root, int key) {
    if (!root) return new Node(key);

    if (key < root->data)
        root->left = insertRecursive(root->left, key);
    else if (key > root->data)
        root->right = insertRecursive(root->right, key);
    // duplicates ignored
    return root;
}

// Inorder traversal
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    int n, val;
    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> val;
        root = insertRecursive(root, val);
    }

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}