  #include <iostream>
  #include <cmath>

using namespace std;

int main ()
{
    int num;
    printf("Enter thenumber of rows  ");
    cin >> num;
    
        
        for (int i = 'A'; i<num + 'A' ;i++){
        for (int j='A'; j <= i;j++)
        {
            cout << char(j) << " ";
        }
        printf("\n");
    }
    


}