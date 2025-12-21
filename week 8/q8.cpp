#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insertRecursive(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->data) root->left = insertRecursive(root->left, key);
    else if (key > root->data) root->right = insertRecursive(root->right, key);
    return root;
}

Node* findMin(Node* root) {
    while (root && root->left) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return root;
    if (key < root->data) root->left = deleteNode(root->left, key);
    else if (key > root->data) root->right = deleteNode(root->right, key);
    else {
        if (!root->left) { Node* temp = root->right; delete root; return temp; }
        else if (!root->right) { Node* temp = root->left; delete root; return temp; }
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

Node* searchIterative(Node* root, int key) {
    while (root) {
        if (key == root->data) return root;
        else if (key < root->data) root = root->left;
        else root = root->right;
    }
    return nullptr;
}

int main() {
    Node* root = nullptr;
    int n, val, delKey, searchKey;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insertRecursive(root, val);
    }

    cout << "Enter key to delete: ";
    cin >> delKey;
    root = deleteNode(root, delKey);

    cout << "Enter key to search: ";
    cin >> searchKey;

    if (searchIterative(root, searchKey))
        cout << "Key found in BST" << endl;
    else
        cout << "Key not found in BST" << endl;

    return 0;
}