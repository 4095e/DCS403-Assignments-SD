#include <iostream>
using namespace std;
double area(double r) { return 3.14159*r*r; }
double area(double l,double w) { return l*w; }
int main() { cout<<"Circle Area: "<<area(3)<<endl; cout<<"Rectangle Area: "<<area(4,5)<<endl; return 0; }
