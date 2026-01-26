#include <iostream>
using namespace std;

void increment(int &num) {
    num++;r
    cout << "Inside function: " << num << endl;
}
int main(){
    int x = 5;
    increment(x);
    cout << "Outside function call: " << x << endl;
}