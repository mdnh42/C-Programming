#include<stdio.h>
int main()
{
    int n;
    int number[100];
    int i;

    printf("Enter you number: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&number[i]);
    }

    int evenCount =0, oddCount=0;

    for(i=0; i<n; i++)
    {
        if(number[i]%2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("Even: %d", evenCount);
    printf("Odd: %d", oddCount);

    return 0;
}
