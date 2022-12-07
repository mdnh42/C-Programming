#include<stdio.h>
int sum(int ara[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",sum(arr,n));
    return 0;
}

int sum(int arr[],int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if((i%2==0 && arr[i]%2==0) || (i%2==1 && arr[i]%2==1))
        {
            sum+=i+arr[i];
        }
    }
   return sum;
}
