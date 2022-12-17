
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }

        int gcd=0,c=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!=j)
                {
                    for(int k=1; k<= arr[i]; k++)
                    {
                        if(arr[i]%k ==0 && arr[j]%k==0)
                            gcd=k;
                    }
                    if(gcd==1)
                        c++;
                }
            }
        }
        printf("%d\n",c);
    }

    return 0;
}


