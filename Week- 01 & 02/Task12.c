/*Write a C program to take three no-negative integers as input and tell if it forms a valid triangle.
A valid triangle is when sum of two sides are strictly greater than the third one.
print yes or no. all sides must be valid (grater than 0). */

#include<stdio.h>

int main()
{
    int a, b, c, sum;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if((a + b> c) && (b + c > a) && (c + a >b ))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
