#include <iostream>
using namespace std;

int main() {
    int baseSalary;
    const double BONUSPERCENT = 15.0;  

    cout << "Enter base salary: ";
    cin >> baseSalary;

    double bonusAmount = baseSalary * (BONUSPERCENT / 100.0);
    double totalSalary = baseSalary + bonusAmount;

    cout << "Total Salary: " << totalSalary << endl;

    return 0;
}
