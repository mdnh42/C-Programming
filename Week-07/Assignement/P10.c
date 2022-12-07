#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    is_seven_present(&arr,n);

    return 0;
}

void  is_seven_present(int* arr,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int a=arr[i],ld;
        while(a>0)
        {
            ld=a%10;
            if(ld==7)
            {
              count++;
            }
            a=a/10;
        }
    }
    if(n%2==0)
    {
        if(count>=n/2)
        printf("Beautiful");
        else
        printf("Ugly");
    }
    else
    {
        if(count>=(n/2)+1)
        printf("Beautiful");
        else
        printf("Ugly");
    }
}
