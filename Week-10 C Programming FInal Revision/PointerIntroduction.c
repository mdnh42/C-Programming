#include<stdio.h>
int main()
{
    int a = 4;
    int* p = &a;

    printf("%d\n", *p);



    int* arr[3] = {1, 2, 3};

    printf("Array: %d", arr);
    printf("Array: %d", arr+1);
    return 0;
}
