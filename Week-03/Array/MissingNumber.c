#include<stdio.h>
int main()
{
    int n, x;
    int number[200000];
    int i;

    scanf("%d",&n);


    for(i=1; i<n; i++)
    {
        scanf("%d",&x);
        number[x] = 1;
    }

    for(i=1; i<=n; i++)
    {
        if(number[i] == 0)
        {
            printf("%d\n",i);
            break;
        }
    }

    return 0;
}

