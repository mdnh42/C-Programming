#include<stdio.h>
int main()
{
    int n;
    int k = 0;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        for(int j = i; j<=n; j++)
        {
            if( i ==1 || i == n || j== i)
                printf("%d",j);

            else
                printf(" ");
        }

        k = n;
        for(int j =1; j<i; j++)
        {
            if(i==1 || i==n || j== i-1)
                printf("%d", k);
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
