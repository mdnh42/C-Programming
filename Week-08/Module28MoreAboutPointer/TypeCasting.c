#include<stdio.h>
int main()
{
    int a = 7;
    double b = 8.56;
    int* pi;
    double* pd;

    pi = &a;
    pd = (double*)pi;


    printf("%d %lf\n", a, b);
    printf("%d %lf\n", pi, pd);



    return 0;
}
