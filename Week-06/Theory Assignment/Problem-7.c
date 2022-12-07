#include<stdio.h>
void array_sort(int arr[], int n);
float find_median(int arr[], int n);

int main()
{
    int n, arr[1000] ;
    printf("How much array: ");
    scanf("%d",&n);
    float median = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    array_sort(arr, n);

    median = find_median(arr, n);

    printf("The Meidan is :%f \n",median);

    return 0;
}

void array_sort(int arr[], int n)
{
    int temp;
    for(int i = 0; i<n; i++)
    {
        for(int i =0; i<(n-1); i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] =temp;
            }
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        printf("\n array [%d] : %d",i,arr[i]);
    }
}

float find_median(int arr[], int n)
{
    float median = 0;
    if(n%2 == 0)
        median = (arr[(n-1)/2]+arr[n/2])/2.0;
    else
        median = arr[n/2];

    return median;
}
