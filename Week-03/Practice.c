#include<stdio.h>
int main()
{
    int arr[100], n;
    printf("Enter how many times: ");
    scanf("%d", &n);

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nPrint All input array number and Sum\n");
    int sum =0;
    for(int i=0; i<n; i++)
    {
        printf("%dth Value: %d \n",i, arr[i]);
        sum += arr[i];
    }
    printf("\nEven and Odd Number \n");
    int ec =0, oc= 0, e[100],o[100];
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2 ==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }

    printf("\nSum is %d", sum);
    printf("\nEven are %d", ec);
    printf("\nOdd  are %d", oc);


    return 0;
}
