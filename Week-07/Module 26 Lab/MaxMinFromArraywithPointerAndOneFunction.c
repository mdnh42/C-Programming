#include<stdio.h>
void find_max_min(int n, int arr[], int* p, int* q)
{
    *p = arr[0];
    *q = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>*p)
            *p = arr[i];
        if(arr[i]<*q)
            *q = arr[i];
    }
}
int main()
{
    int arr[] = {55, 1, 3, 8, 9, 555, 25, 6};
    int n = 8;

    int maxx, minn;
    find_max_min(n, arr, &maxx, &minn);
    printf("%d %d",maxx, minn);

    return 0;
}
