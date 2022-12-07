#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    for(int i =1; i<=k; i++)
    {
        if(n%10 == 0)
            n = n/10;

        else
            n = n - 1;
    }
    printf("%d", n);
}
