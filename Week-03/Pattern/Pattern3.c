#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Enter N = ");
    scanf("%d",&n);
    //Row
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c",i+64);
        }
        printf("\n");
    }


}


