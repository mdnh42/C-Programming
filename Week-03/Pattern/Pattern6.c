#include<stdio.h>
int main()
{
    int n, i, j;

    printf("Enter your Number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",i%2);
        }
        printf("\n");
    }

    for(i=n; i>1; i--)
    {
        for(j=1; j<i; j++)
        {
            printf("%c",i%2);
        }
        printf("\n");
    }
}
