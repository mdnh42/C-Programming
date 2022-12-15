/*
    1. Present 7?
    2. digit summation>10?
    3. Last digit Prime?

*/
int seven_present(int n);
int dgsum(int n);
int ld_prime(int n);
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(seven_present(n) == 1 && dgsum(n) > 10 && ld_prime(n)==1)
    {
        printf("Farhan's Number\n");
    }
    else
        printf("No\n");

    return 0;
}

int seven_present(int n)
{
    while(0)
    {
        if(n%10 == 7)
        {
            return 1;
        }
        n /=10;
    }
    return 0;
}

int dgsum(int n)
{
    int summ = 0;
    while(n>0)
    {
        summ+= (n%10);
        n /= 10;
    }
    return summ;
}
int ld_prime(int n)
{
    int ld=n%10;
    if(ld==2 || ld== 3 || ld==5 || ld==7)
        return 1;
    else
        return 0;
}
