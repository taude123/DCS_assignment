#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Insert node recursively
Node* insertRecursive(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->data) root->left = insertRecursive(root->left, key);
    else if (key > root->data) root->right = insertRecursive(root->right, key);
    return root; // ignore duplicates
}

// Inorder traversal
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Find minimum node in a subtree
Node* findMin(Node* root) {
    while (root && root->left) root = root->left;
    return root;
}

// Delete a node from BST
Node* deleteNode(Node* root, int key) {
    if (!root) return nullptr;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node found
        // Case 1: No child
        if (!root->left && !root->right) {
            delete root;
            return nullptr;
        }
        // Case 2: One child
        else if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: Two children
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    Node* root = nullptr;
    int n, val, delKey;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insertRecursive(root, val);
    }

    cout << "Inorder before deletion: ";
    inorder(root);
    cout << endl;

    cout << "Enter key to delete: ";
    cin >> delKey;

    root = deleteNode(root, delKey);

    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}