#include<stdio.h>
int main()
{
    int array[15];
    array[0] = 1;
    int n = 15;
    for(int i =1; i<=n;i++)
    {
        array[i] = 2* array[i-1];
    }
    for(int i =0; i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
