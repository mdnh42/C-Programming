#include<stdio.h>
int main()
{
    int n, i, count=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=2; i<n; i++)
    {
        if(n%2 ==0)
        {
            count++;
            break;
        }
    }
    if(count == 0)
    {
        printf("Prime");
    }
    else
        printf("Composite");

    return 0;
}
