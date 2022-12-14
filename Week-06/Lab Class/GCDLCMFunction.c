#include<stdio.h>

int gcd(int m, int n);
int lcm(int m, int n);

int main()
{
    int a, b;
    scanf("%d%d",&a, &b);

    printf("GCD %d\n", gcd(a,b));
    printf("LCM %d\n", lcm(a,b));

    return 0;
}


int gcd(int m, int n)
{
    int i, l, s;
    if(m>n)
    {
        l=m;
        s=n;
    }
    else
    {
        l=n;
        s=m;
    }
    for(i = s; i>=1; i--)
    {
        if(l%i==0 && s%i == 0)
            return i;
    }
}

int lcm(int m, int n)
{
    int i;
    for(i=m; ; i++)
    {
        if(i%m==0 && i%n == 0)
            return i;
    }
}
