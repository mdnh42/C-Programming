#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int arr[20007];
    for(int i=1; i<n; i++)
    {
        scanf("%d",&x);
        arr[x] = 1;
    }

    for(int i=1; i<=n; i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
