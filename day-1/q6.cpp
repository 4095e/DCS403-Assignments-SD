#include <iostream>
using namespace std;
struct Node { int data; Node* left; Node* right; Node(int v) : data(v), left(nullptr), right(nullptr) {} };
Node* minNode(Node* r) { while (r && r->left) r = r->left; return r; }
Node* del(Node* root, int k) { if (!root) return nullptr; if (k < root->data) root->left = del(root->left, k); else if (k > root->data) root->right = del(root->right, k); else { if (!root->left && !root->right) { delete root; return nullptr; } if (!root->left) { Node* t = root->right; delete root; return t; } if (!root->right) { Node* t = root->left; delete root; return t; } Node* s = minNode(root->right); root->data = s->data; root->right = del(root->right, s->data); } return root; }
int main() { Node* root = new Node(50); int k; cout << "Delete: "; cin >> k; root = del(root, k); cout << "Deleted!" << endl; return 0; }