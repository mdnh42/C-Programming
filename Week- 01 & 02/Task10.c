//Write a C Program take one non-negative integer as input and check if it is even or odd.

#include<stdio.h>
int main()
{
    int number;
    printf("Enter a Non-negative integer number: ");
    scanf("%d", &number);

    if(number%2 ==0 )
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
