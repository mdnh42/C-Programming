//Write a C program to find the sum of first 10 natural numbers.

#include<stdio.h>

int main()
{
    int i, sum=0;
    for(i=1; i<=10; i++)
    {
        printf("%d \n", i);
        sum =sum + i;

    }
    printf("\n The sum is %d \n", sum);
}
