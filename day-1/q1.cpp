#include <iostream>
using namespace std;
int main() { int arr[5]; cout << "Enter 5 integers:\n"; for (int i = 0; i < 5; i++) { cout << "Element " << i + 1 << ": "; cin >> arr[i]; } cout << "\nThe integers are: "; for (int i = 0; i < 5; i++) cout << arr[i] << " "; cout << endl; return 0; }