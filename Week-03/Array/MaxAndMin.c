#include<stdio.h>
int main()
{

    int N=6;
    int ara[N];
    int i;
    for(i=0; i<N; i++)
    {
        scanf("%d", &ara[i]);

    }

    int max = ara[0];
    for(i=0; i<N; i++)
    {
        if(ara[i]>max)
        {
            max = ara[i];
        }
    }
    int min = ara[0];
    for(i=0; i<N; i++)
    {
        if(ara[i]<min)
        {
            min = ara[i];
        }
    }
    printf("Max is: %d", max);
    printf("Max is: %d", min);

    return 0;
}
