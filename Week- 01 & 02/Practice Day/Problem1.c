#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d",&n);
    if(n>0)
    {
        for(i=n; i>=-n; i--)
        {
            printf("%d",i);
        }
    }
    if(0>n)
    {
        for(j=-n; j>n; j--)
        {
            printf("Fron Neg%d",j);
        }
    }
    return 0;
}
