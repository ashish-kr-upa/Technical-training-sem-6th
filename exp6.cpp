#include <iostream>
#include <stack> // Changed from <queue> to <stack> for iterative preorder traversal
using namespace std;

// Definition for a binary tree node.
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to perform preorder traversal of a binary tree iteratively
void preOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    stack<Node*> stk;
    stk.push(root);
    while (!stk.empty()) {
        Node* curr = stk.top();
        stk.pop();
        cout << curr->data << " ";
        if (curr->right) {
            stk.push(curr->right);
        }
        if (curr->left) {
            stk.push(curr->left);
        }
    }
}

int main() {
    // Constructing the sample binary tree
    Node* root = new Node(1);
    root->right = new Node(2);
    root->right->right = new Node(5);
    root->right->right->left = new Node(3);
    root->right->right->left->right = new Node(4);
    root->right->right->right = new Node(6);
    cout << "Preorder Traversal: ";
    preOrder(root);
    return 0;
}
