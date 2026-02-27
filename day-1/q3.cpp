#include <iostream>
using namespace std;
struct Node { int data; Node* left; Node* right; Node(int v) : data(v), left(nullptr), right(nullptr) {} };
Node* insert(Node* root, int k) { if (!root) return new Node(k); if (k < root->data) root->left = insert(root->left, k); else if (k > root->data) root->right = insert(root->right, k); return root; }
int main() { Node* root = nullptr; int n; cout << "Nodes: "; cin >> n; for (int i = 0; i < n; i++) { int v; cin >> v; root = insert(root, v); } cout << "BST created!" << endl; return 0; }