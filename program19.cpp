// Program 19 - Tree Traversals
// Author: Namish (Roll 241478)
#include <iostream>
using namespace std;

struct Node {
    int v;
    Node* left;
    Node* right;
    Node(int x): v(x), left(nullptr), right(nullptr) {}
};

Node* insert(Node* r, int x) {
    if (!r) return new Node(x);
    if (x < r->v) r->left = insert(r->left, x);
    else r->right = insert(r->right, x);
    return r;
}

void inorder(Node* r) {
    if (r) {
        inorder(r->left);
        cout << r->v << " ";
        inorder(r->right);
    }
}

void preorder(Node* r) {
    if (r) {
        cout << r->v << " ";
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder(Node* r) {
    if (r) {
        postorder(r->left);
        postorder(r->right);
        cout << r->v << " ";
    }
}

int main() {
    Node* root = nullptr;
    root = insert(root, 40);
    insert(root, 20);
    insert(root, 60);
    insert(root, 10);
    insert(root, 30);

    cout << "Inorder: ";
    inorder(root);
    cout << "\nPreorder: ";
    preorder(root);
    cout << "\nPostorder: ";
    postorder(root);
    cout << "\n";

    return 0;
}

