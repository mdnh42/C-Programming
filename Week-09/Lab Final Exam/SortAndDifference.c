#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d",&n);
    int a[n];
    int b[n];
    int result[n];
    //Array Input A and Bs
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }
    int temp;
    for(int i=0; i<n; i++)
    {
       for(j=0; j<n; j++)
       {
           if(a[i]<a[j])
           {
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
       }
    }
    int temp2;
    for( i=0; i<n; i++)
    {
       for( j=0; j<n; j++)
       {
           if(b[i]>b[j])
           {
               temp2 = b[i];
               b[i] = b[j];
               b[j] = temp2;
           }
       }
    }

    for(i=0; i<n; i++)
    {
        result[i] = a[i] - b[i];
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",result[i]);
    }

    return 0;
}
