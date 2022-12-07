//Write a program in C to display n terms of natural number and their sum

#include<stdio.h>

int main()
{
    int n, i, sum=0;
    printf("Enter n Terms of Naturma number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%d \n",i);
        sum+=i; // sum = sum + i;
    }
    printf("\n the sum is: %d", sum);
}
