#include<stdio.h>
int main()
{
    int a=7;
    double b=8.65;

    int* pi;
    double* pd;


    pi = &a;
    pd = &b;


    printf("%d %lf\n", a, b);
    printf("%d %lf ", pi, pd);

    return 0;
}
