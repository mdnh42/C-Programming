/* Sample Input:
    10 5 1 2 7 10 2 2 2
*/
#include<stdio.h>
int main()
{
    int i, n;
    printf("How many number for array: ");
    scanf("%d",&n);
    int input[n];
    printf("Enter your array one by one space: s");
    for(i=0; i<n; i++)
    {
        scanf("%d",&input[i]);
    }

    int largest = input[0];

    for(i=1; i<n; i++)
    {
        if(input[i]>largest)
        {
            largest = input[i];
        }

    }
    int arr[largest+1];

    for(i=0; i<=largest; i++)
    {
        arr[i] = 0;
    }

    for(i=0; i<n; i++)
    {
        arr[input[i]] += 1;
    }

    int dublicate = 0, unique =0;

    for(i=1; i<=largest; i++)
    {
        if(arr[i]==1)
            unique+=1;
        else if(arr[i]>1)
            dublicate+=1;
    }
    printf("Total Dublicate elements found = %d", dublicate);
    printf("Total Unique elements found = %d", unique);

    return 0;
}

