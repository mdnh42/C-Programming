#include<stdio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    printf("Example of Pass By Value\n\n");
    int a = 5, b = 7;
    printf("values before function call:\n");
    printf("a = %d, b = %d\n",a, b);

    swap(a,b);
    printf("values after function call:\n");
    printf("a = %d, b = %d\n",a, b);

    printf("\n\n We swap here but no change each other. actully its pass by value");
    return 0;
}
