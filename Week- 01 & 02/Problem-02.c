//Write a C program to check whether a given number is even or odd.

#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number%2 == 0)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is odd \n");
    }

    return 0;
}
