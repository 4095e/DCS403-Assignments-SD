#include <iostream>
using namespace std;
struct Node { int data; Node* left; Node* right; Node(int v) : data(v), left(nullptr), right(nullptr) {} };
Node* minR(Node* r) { return r && r->left ? minR(r->left) : r; }
Node* maxR(Node* r) { return r && r->right ? maxR(r->right) : r; }
Node* minI(Node* r) { while (r && r->left) r = r->left; return r; }
Node* maxI(Node* r) { while (r && r->right) r = r->right; return r; }
int main() { Node* root = new Node(50); root->left = new Node(30); root->right = new Node(70); cout << "Min(R): " << minR(root)->data << " Max(R): " << maxR(root)->data << endl; cout << "Min(I): " << minI(root)->data << " Max(I): " << maxI(root)->data << endl; return 0; }