#include<stdio.h>
int main()
{
    int number[5];
    int i;

    for(i=0; i<5; i++)
    {
        scanf("%d", &number[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("%d-th position value %d\n",i, number[i]);
    }

    return 0;
}
