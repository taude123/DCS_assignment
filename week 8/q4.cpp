#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Iterative insertion
Node* insertIterative(Node* root, int key) {
    Node* newNode = new Node(key);
    if (!root) return newNode;

    Node* parent = nullptr;
    Node* curr = root;

    while (curr) {
        parent = curr;
        if (key < curr->data) curr = curr->left;
        else if (key > curr->data) curr = curr->right;
        else return root; // duplicate
    }

    if (key < parent->data) parent->left = newNode;
    else parent->right = newNode;

    return root;
}

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
        cin >> val;
        root = insertIterative(root, val);
    }

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}