#include<stdio.h>
void swap(int* arr,int n);

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    swap(&arr,n);

    return 0;
}

void swap(int* arr,int n)
{
    int k;
    scanf("%d",&k);
    int L,R,temp;
    for(int i=0;i<k;i++)
    {
        scanf("%d %d",&L,&R);
        temp=arr[L];
        arr[L]=arr[R];
        arr[R]=temp;
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}
