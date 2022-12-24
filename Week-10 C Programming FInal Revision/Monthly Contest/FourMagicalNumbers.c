#include <stdio.h>
void sort(int *ptr, int size);

int main()
{
    int t, n;
    scanf("%d",&t);
    int mam,maa,mim,mia;
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(int i = 0; i<n ; i++)
            scanf("%d",a+i);
        sort(a,n);
        mam = (a[n-1]*a[n-1])>(a[0]*a[0])?(a[n-1]*a[n-1]):(a[0]*a[0]);
        if(a[0]<=0&&a[n-1]>=0)
            mim=a[0]*a[n-1];
        else if(a[0]>=0)
            mim = a[0]*a[0];
        else mim = a[n-1]*a[n-1];
        maa = a[n-1]*2;
        mia = 2*a[0];
        printf("%d %d %d %d\n",mam, mim, maa, mia);
    }
    return 0;
}

void sort(int *ptr, int size  )
{
    int * base_addr=ptr, item, *left;
    ptr++;
    for(ptr; ptr<base_addr+size; ptr++)
    {
        item = *ptr;
        left = ptr-1;
        while(left>=base_addr && item<*left)
        {
            *(left+1)=*left;
            --left;
        }
        *(++left) = item;
    }
}
