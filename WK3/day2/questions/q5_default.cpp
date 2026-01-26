#include <iostream>
using namespace std;
int power(int base,int exp=2){ int res=1; for(int i=0;i<exp;i++) res*=base; return res; }
int main(){ cout<<"Power(5): "<<power(5)<<endl; cout<<"Power(5,3): "<<power(5,3)<<endl; return 0; }
