#include<stdio.h>
int main()
{
    int a=5, b=13;
    //Write code here

    int temp; // declare a temporary variable;
    temp = a;
    a = b;
    b = temp;

   //End of code
    printf("%d and %d", a, b);

    return 0;
}


