#include <iostream>
using namespace std;
struct Node { int data; Node* left; Node* right; Node(int v) : data(v), left(nullptr), right(nullptr) {} };
Node* search(Node* root, int k) { while (root) { if (k == root->data) return root; if (k < root->data) root = root->left; else root = root->right; } return nullptr; }
int main() { Node* root = new Node(50); root->left = new Node(30); root->right = new Node(70); int k; cout << "Search: "; cin >> k; cout << (search(root, k) ? "Found" : "Not Found") << endl; return 0; }