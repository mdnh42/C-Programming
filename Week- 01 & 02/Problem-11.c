//Write a C program to calculate the root of a Quadratic Equation.

#include<stdio.h>
int main()
{
    int a, b, c, d;
    float x1, x2;
    printf("Enter your a, b, c");
    scanf("%d%d%d", &a, &b, &c);

    d = sqrt(b*b - 4*a*c);
    x1 = (-b+d)/2*a;
    x2 = (-b-d)/2*a;

    printf("x1 = %lf \n", x1);
    printf("x2 = %lf \n", x2);

    return 0;

}
