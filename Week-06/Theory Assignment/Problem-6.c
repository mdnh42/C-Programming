#include<stdio.h>
int fact(int x);
int ratio(int x, int y);

int main()
{
    int x, y;
    scanf("%d%d",&x,&y);
    int ans = ratio(x, y);

    printf("Factorial %d\n",ans);
    return 0;

    return 0;
}
int ratio(int x, int y)
{
    return fact(x)/fact(y);
}

int fact(int x)
{
    int result = 1;
    for(int i = 1; i<=x; i++)
    {
        result *= i;
    }
    return result;
}
