#include<stdio.h>
int main()
{
    int i, j, n;

    scanf("%d",&n);

    for(i=1; i<=5; i++)
    {
//        printing spaces
        for(j=1; j<=5; j++)
        {
            if(i==1 || i == n || j == 1 || j==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}


