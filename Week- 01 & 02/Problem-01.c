//Write a C program to accept two integers and check whether they are equal or not.

#include<stdio.h>
int main()
{
    int number1, number2;
    printf("Enter two integer values: ");
    scanf("%d %d", &number1, &number2);

    if(number1 == number2)
    {
        printf("Number are equal");
    }
    else
    {
        printf("Number are not equal");
    }
    return 0;
}
