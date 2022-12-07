#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    int positon=0, findD=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            arr[positon]=i;
            positon++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            arr[positon]=i;
            positon++;
        }
    }
    for(int i=0;i<positon;i++)
    {
        printf("%d ",arr[i]);
        if(i==(k-1))
        {
            findD+=arr[i];
        }
    }
    printf("\nThe %dth element in this sequence is %d.",k,findD);

    return 0;
}
