#include <iostream>
using namespace std;
int sumArray(int arr[], int size) { int sum = 0; for (int i = 0; i < size; i++) sum += arr[i]; return sum; } int main() { int n; cout << "Enter elements: "; cin >> n; int arr[n]; for (int i = 0; i < n; i++) { cout << "Element " << i + 1 << ": "; cin >> arr[i]; } cout << "\nSum: " << sumArray(arr, n) << endl; return 0; }