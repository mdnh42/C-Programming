#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter your number: ");
    scanf("%d", &n);


    for(i=1; i<=n; i++)
    {
        printf("%d ",i);
    }

    for(i=1; i>=n; i--)
    {
        printf("%d ",i);
    }
}

