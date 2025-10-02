#include <iostream>
#include <string>
using namespace std;

struct BinaryTreeNode {
    string data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(const string& value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int main() {
    BinaryTreeNode* root = new BinaryTreeNode("A");
    root->left = new BinaryTreeNode("B");
    root->right = new BinaryTreeNode("C");
    root->left->left = new BinaryTreeNode("D");
    root->left->right = new BinaryTreeNode("E");

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}

void inorder(BinaryTreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
