#include <iostream>
using namespace std;
void hanoi(int n, char a, char c, char b) { if (n == 1) { cout << "Move 1 from " << a << " to " << c << endl; return; } hanoi(n - 1, a, b, c); cout << "Move " << n << " from " << a << " to " << c << endl; hanoi(n - 1, b, c, a); } int main() { int n; cout << "Disks: "; cin >> n; hanoi(n, 'A', 'C', 'B'); return 0; }