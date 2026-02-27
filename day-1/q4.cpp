#include <iostream>
using namespace std;
void printArray(int arr[], int i, int n) { if (i == n) return; cout << arr[i] << " "; printArray(arr, i + 1, n); } int main() { int n; cout << "Size: "; cin >> n; int arr[n]; for (int i = 0; i < n; i++) { cout << "Element " << i + 1 << ": "; cin >> arr[i]; } cout << "Array: "; printArray(arr, 0, n); cout << endl; return 0; }