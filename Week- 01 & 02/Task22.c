#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter your number: ");
    scanf("%d", &n);


    for(i=2; i<=n; i +=2)
    {
        printf("%d ",i);
    }

    for(i=2; i>=n; i-= 2)
    {
        printf("%d ",i);
    }
}

