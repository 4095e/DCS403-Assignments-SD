#include <iostream>
#include <vector>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    vector<int> nums;
    for (int i = 1; i <= number; i++) {
        nums.push_back(i);
    }

    int sum = 0;
    for (int x : nums) {
        sum += x;
    }

    cout << "The sum is " << sum << endl;

    return 0;
}
