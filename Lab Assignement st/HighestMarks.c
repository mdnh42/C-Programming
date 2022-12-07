#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d",&n);
    int input[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&input[i]);
    }

    int largest = input[0];

    for(i=1; i<=n; i++)
    {
        if(input[i]>largest)
        {
            largest = input[i];
        }
    }


    int needMarks;

    for(i=0; i<n; i++)
    {
        needMarks = largest - input[i];
        printf("%d ",needMarks);
    }
    return 0;
}
