#include<stdio.h>
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    printf("Example of Pass By reference\n\n");
    int a = 5, b = 7;
    printf("values before function call:\n");
    printf("a = %d, b = %d\n",a, b);

    swap(&a,&b);
    printf("values after function call:\n");
    printf("a = %d, b = %d\n",a, b);

    printf("\n\n We swap here. its pass by reference");
    return 0;
}

