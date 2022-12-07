/*
Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
of size N . And the next line will contain k . Now find the k-th largest and kth-smallest element from the array.
Implement it using function. And try to implement it using 3 functions .1st one is for sorting , second one for
finding k-th largest element and third one for finding the kth- smallest element.
See the sample output for more clarification.
Note – 1<=k<=N
Sample Input : Sample Output :
9
2 17 1 1 3 2 5 19 5 4

th largest element = 5

4 4

th smallest element = 2
*/
#include<stdio.h>
int sorted(int n, int arr[]);
int largestELement(int n, int arr[]);
int main()
{
    int n, i, arr[100];
    scanf("%d",&n);
    for(int i= 1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }


    sorted(n, arr);
    largestELement(n, arr);

    return 0;
}

int sorted(int n, int arr[])
{

    int temp;
    for(int i = 0; i<n; i++)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    for(int i= 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

int largestELement(int n, int arr[])
{
    int largest = arr[0];

    for(int i=1; i<n; i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }

    }

    int count = 0;
    int largestPosition;
    printf("Which Position: ");
    scanf("%d",&largestPosition);
    for(int i=largest; i>=1; i--)
    {
        if(arr[i] == 1)
        {
            count+=1;
        }

        if(count==largestPosition)
        {
            printf("Largest %th %d",largestPosition, i);

        }
    }
    return 0;

}
