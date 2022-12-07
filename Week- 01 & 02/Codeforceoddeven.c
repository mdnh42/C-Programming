#include<stdio.h>
int main()
{
    int n, i, odd, even;
    scanf("%d", &n);


    for(i=1; i<=n; i++)
    {
        if(i%2 != 0)
            printf("%d%d", i, i/2==0);

    }
        if(i%2 ==0)
        printf("%d", i);
//    printf("%d",i);


    return 0;
}
