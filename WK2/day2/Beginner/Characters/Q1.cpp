#include <iostream>
#include  <cctype>

int main ()
{

    char input_value ;
    printf(" Enter a value: ");
    scanf( "%c", &input_value);

    if (isalpha(input_value))
    {
        printf ("%c is an alphabet", input_value);
    }

    else if (ispunct(input_value))
    {
        printf("%c is a special character",input_value);
    }

    else 
    {
        printf("%c is a digit", input_value);
    }


}