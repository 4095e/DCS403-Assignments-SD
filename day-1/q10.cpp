#include <iostream>
#include <string>
using namespace std;
bool isPalin(string s, int i, int j) { if (i >= j) return true; if (s[i] != s[j]) return false; return isPalin(s, i + 1, j - 1); } int main() { string s; cout << "String: "; cin >> s; if (isPalin(s, 0, s.length() - 1)) cout << "Palindrome" << endl; else cout << "Not Palindrome" << endl; return 0; }