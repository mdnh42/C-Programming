//Task:8 Write a C program take three integers as input and show who is bigger. If they are equal print as it is. See the sample input output for more classification.

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three integer number: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b && a>c)
    {
        printf("%d a, b are bigger", a);
    }
    else if(b>a && b>c)
    {
        printf("%d is bigger");
    }
    else if(c>a && c>b)
    {
        printf("%d is bigger");
    }
    else
    {
        printf("They are equal");
    }
}
