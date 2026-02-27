#include <iostream>
#include <string>
using namespace std;
void reverseStr(string& s, int i, int j) { if (i >= j) return; swap(s[i], s[j]); reverseStr(s, i + 1, j - 1); } int main() { string s; cout << "String: "; cin >> s; cout << "Original: " << s << endl; reverseStr(s, 0, s.length() - 1); cout << "Reversed: " << s << endl; return 0; }