#include<stdio.h>
int main()
{
    int rows, col,n;
    scanf("%d",&n);

    for(rows=1; rows<=n; rows++)
    {
        for(col=1; col<=n-rows; col++)
        {
            printf(" ");
        }
        if(rows%2==0)
        {
            for(col=1; col<=rows; col++)
            {
                printf("*");
            }
            for(col=rows-1; col>=1; col--)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(col=1; col<=rows; col++)
            {
                printf("^");
            }
            for(col=rows-1; col>=1; col--)
            {
                printf("^");
            }
            printf("\n");
        }

    }
    return 0;
}
