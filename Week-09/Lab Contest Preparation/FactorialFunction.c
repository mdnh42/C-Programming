#include<stdio.h>
int fact(int x)
{
    int result =1, i;
    for(i=1; i<=x; i++)
    {
        result *= i;
    }
    return result;
}
int main()
{
    int n;
    scanf("%d",&n);

    int ans = fact(n);
    printf("Factorial %d\n",ans);

    return 0;
}
