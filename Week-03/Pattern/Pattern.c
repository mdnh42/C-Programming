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
            printf("%d",i);
        }
        printf("\n");
    }
    //Column
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}
