#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        for(int i=l; i<=r; i++)
        {
            int prime = i;
            for(int j=2; j<i; j++)
            {
                if(prime%j==0)
                {
                    prime =0;
                    break;
                }
            }
            if(prime != 0)
            {
                printf("%d ", prime);
            }
        }
        printf("\n");
    }
    return 0;
}
