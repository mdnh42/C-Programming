#include<stdio.h>
int main()
{
    int i, j, n;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
//        printing spaces
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

//        printing star;
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

