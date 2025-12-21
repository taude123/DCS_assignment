#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Recursive min/max
Node* findMinRecursive(Node* root) {
    if (!root || !root->left) return root;
    return findMinRecursive(root->left);
}
Node* findMaxRecursive(Node* root) {
    if (!root || !root->right) return root;
    return findMaxRecursive(root->right);
}

// Iterative min/max
Node* findMinIterative(Node* root) {
    while (root && root->left) root = root->left;
    return root;
}
Node* findMaxIterative(Node* root) {
    while (root && root->right) root = root->right;
    return root;
}

int main() {
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    root->left->left = new Node(20);
    root->right->right = new Node(80);

    Node* minNode = findMinIterative(root);
    Node* maxNode = findMaxIterative(root);

    cout << "Minimum: " << (minNode ? minNode->data : -1) << endl;
    cout << "Maximum: " << (maxNode ? maxNode->data : -1) << endl;

    return 0;
}