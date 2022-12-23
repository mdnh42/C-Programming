#include <stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    for(int i=0; i<t; i++)
    {
        int a[1005],i,large,small;
        long long int n;
        scanf("%lld",&n);

        for(i=0; i<n; ++i)
            scanf("%d",&a[i]);
        large=small=a[0];
        for(i=1; i<n; ++i)
        {
            if(a[i]>large)
                large=a[i];
            if(a[i]<small)
                small=a[i];
        }

        int maxPro = large*large;
        int minPro = small*small;
        int maxSum = large+large;
        int minSum = small+small;

        if(maxPro<minPro)
        {
            printf("%d %d %d %d\n", minPro,maxPro, maxSum, minSum);
        }
        else
            printf("%d %d %d %d\n", maxPro, minPro, maxSum, minSum);

    }


    return 0;
}

