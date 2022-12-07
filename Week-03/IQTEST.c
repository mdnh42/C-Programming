#include<stdio.h>
int main()
{
    int n, i, arr[105];
    scanf("%d", &n);
    for(i= 1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ec = 0, oc = 0;

    for(i=1; i<=n; i++)
    {
        if(arr[i]%2 == 0)
            ec++;

        else
            oc++;
    }
//    printf("Even %d",ec);
//    printf("Odd %d",oc);
        if(ec==1)
        {
            for(i=1; i<=n; i++)
            {
                ans = i;
            }

        }
    return 0;
}
