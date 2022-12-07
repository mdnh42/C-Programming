#include<stdio.h>
int main()
{
    int i, t, a, b, c;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        int sum;
        scanf("%d",&sum);

        scanf("%d%d%d",&a,&b,&c);

        int result = sum - (a+b+c);

        printf("%d\n",result);
    }

    return 0;
}
