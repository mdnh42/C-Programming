#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t;i++)
    {
        int n,arr[90],ld=0,c=0;
        scanf("%d",&n);
        int tmp=n;
        while(tmp!=0)
        {
            tmp=tmp/10;
            c++;
        }
        for(int i=c; i>=1; i--)
        {
            ld=n%10;
            printf("%c",ld+64);
            n=n/10;
        }
        printf("\n");
    }
    return 0;
}
