#include <iostream>
using namespace std;
void swapValues(int &a,int &b){ int t=a; a=b; b=t; }
int main(){ int x=10,y=20; cout<<"Before: "<<x<<" "<<y<<endl; swapValues(x,y); cout<<"After: "<<x<<" "<<y<<endl; return 0; }
