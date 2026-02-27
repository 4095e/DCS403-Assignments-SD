#include <iostream>
using namespace std;
long long fibTail(int n, long long a = 0, long long b = 1) { if (n == 0) return a; return fibTail(n - 1, b, a + b); } int main() { int n; cout << "Position: "; cin >> n; cout << "Fibonacci: " << fibTail(n) << endl; return 0; }