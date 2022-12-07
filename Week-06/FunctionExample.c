#include<stdio.h>

int gcd(a, b)
{
    for(int i = a; i>=1; i--)
    {
        if(a%i==0 && b%i == 0)
        {
            return i;
        }
    }
}

int main()
{
    int a, b, ans, i;
    scanf("%d%d",&a, &b);

    ans = gcd(a, b);
    printf("The gcd  is %d\n",ans);

    return 0;
}
