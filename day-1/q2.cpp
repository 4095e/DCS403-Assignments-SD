#include <iostream>
using namespace std;
int main() { int n; cout << "Enter number of elements: "; cin >> n; int arr[n]; cout << "Enter " << n << " elements:\n"; for (int i = 0; i < n; i++) { cout << "Element " << i + 1 << ": "; cin >> arr[i]; } int max = arr[0]; for (int i = 1; i < n; i++) if (arr[i] > max) max = arr[i]; cout << "\nMaximum: " << max << endl; return 0; }