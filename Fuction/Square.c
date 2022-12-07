#include<stdio.h>


int square(a)
{
    return a*a;
}

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    int result = square(num);
    printf("Square is %d",result);
}
