#include<stdio.h>

int main()
{
    int i, n;
    printf("Enter your number n and m: ");
    scanf("%d", &n);


    for(i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            printf("%d ",i);
        }

    }

    return 0;
}

