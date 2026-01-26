#include <iostream>
using namespace std;

// Global variable
int globalCounter = 0;

void counterDemo() {

    // Local variable
    int localCounter = 0;

    // Static local variable
    static int staticCounter = 0;

    localCounter++;
    globalCounter++;
    staticCounter++;

    cout << "Local Counter: " << localCounter << endl;
    cout << "Global Counter: " << globalCounter << endl;
    cout << "Static Local Counter: " << staticCounter << endl;
    cout << "--------------------------" << endl;
}

int main() {

    counterDemo();
    counterDemo();
    counterDemo();

    return 0;
}
