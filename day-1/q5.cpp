#include <iostream>
using namespace std;
long long power(long long a, long long b, long long res = 1) { if (b == 0) return res; return power(a, b - 1, res * a); } int main() { long long a, b; cout << "Base: "; cin >> a; cout << "Exponent: "; cin >> b; cout << a << "^" << b << " = " << power(a, b) << endl; return 0; }