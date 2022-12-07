#include<stdio.h>
void distict_elements(long long int a[], int n);
int main()
{
    int size_array=4, i;
    long long arr[20];
    for(i=0; i<size_array; i++)
    {
        scanf("%lld",&arr[i]);
    }
    distict_elements(arr, size_array);
    return 0;
}

void distict_elements(long long int a[], int n)
{
    int i, j, count = 0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(a[i]==a[j])
            break;
        }
        if(i == j)
        {
            count++;
        }

    }
    printf("%d",4-count);
}
