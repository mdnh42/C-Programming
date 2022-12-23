#include<stdio.h>
int main()
{
    int a =5;
    printf("%d\n",a);
    int* p = &a;
    printf("%p\n",p);
    //Double Pointer
    int** q=&p;
    printf("%p\n", q);

    **q = 7;
    printf("%d",a);
}
