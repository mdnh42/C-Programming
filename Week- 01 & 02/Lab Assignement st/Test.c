#include<stdio.h>
int main()
{
    int i, n, a[1000];
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int largest = a[0];

    for(i=1; i<n; i++)
    {
        if(a[i]>largest)
        {
            largest = a[i];
        }
    }


    for(i=0; i<n; i++)
    {
        a[i] = largest-a[i];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
