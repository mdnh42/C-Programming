#include<stdio.h>
int main()
{
    char arr[9] = {1, 2,3, 4, 5, 6, 7, 8, 9};

    for(int i=0; i<9; i++)
        printf("%p\n",&arr[i]);


    return 0;
}
