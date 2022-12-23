#include<stdio.h>
//Reference By Value
void swap(int* x, int* y)
{

        int temp;
        temp = *x;
        *x =*y;
        *y =temp;

}
int main()
{
    int a=5, b=7;
    printf("a=%d, b=%d\n", a, b);

    swap(&a,&b);
    printf("a=%d, b=%d", a, b);
    return 0;
}
