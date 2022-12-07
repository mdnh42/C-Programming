#include<stdio.h>
int main()
{
    int i, n;
    printf("How many number for array: ");
    scanf("%d",&n);
    int input[n];
    printf("Enter your array one by one space:");
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

    int cnt = 0;
    int cntinput;
    printf("Enter nth Position Smallest Number: ");
    scanf("%d",&cntinput);
    for(i=1; i<=largest; i++)
    {
        if(arr[i] == 1)
        {
            cnt+=1;
        }

        if(cnt==2 || cnt == 1)
        {
            printf("Minimum %dth is %d",cntinput, i);
            break;

        }
    }
    return 0;
}
