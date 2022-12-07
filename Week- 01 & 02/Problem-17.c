//6. Write a program in C to display the multiplication table of a given integer.

#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a integer: ");
    scanf("%d",&n);

    for(i=1; i<=10; i++)
    {
        printf("The product is %d X %d = %d \n", i, n, n*i);


    }

}
