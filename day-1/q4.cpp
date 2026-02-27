#include <iostream>
using namespace std;
struct Node { int data; Node* left; Node* right; Node(int v) : data(v), left(nullptr), right(nullptr) {} };
void insert(Node*& root, int k) { if (!root) { root = new Node(k); return; } Node* curr = root, *par = nullptr; while (curr) { par = curr; if (k < curr->data) curr = curr->left; else if (k > curr->data) curr = curr->right; else return; } if (k < par->data) par->left = new Node(k); else par->right = new Node(k); }
int main() { Node* root = nullptr; int n; cout << "Nodes: "; cin >> n; for (int i = 0; i < n; i++) { int v; cin >> v; insert(root, v); } cout << "BST created!" << endl; return 0; }