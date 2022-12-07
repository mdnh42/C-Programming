//Write a program a integer number even or odd?

#include<stdio.h>
int main()
{
    int x;
    printf("Please enter an integer: ");
    scanf("%d", &x);
    if(x%2 == 0)
    {
        printf("The number is an even number. \n");
    }
    else
    {
        printf("The input is an odd number: \n");
    }
    return 0;
}
