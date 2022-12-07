#include<stdio.h>
int seven_present(int n);
int dsum(int n);
int is_prime(int n);

int main()
{
    long long int n;
    scanf("%d",&n);

    if(seven_present(n) == 1 && dsum(n)>10 && is_prime(n)==1)
        printf("Farhan's Number\n");

    else
        printf("No\n");
    return 0;
}
int seven_present(int n)
{
    while(n>0)
    {
        if(n%10==7)
            return 1;
        n/=10;
    }
    return 0;
}
int dsum(int n)
{
    int sum =0;
    while(n>0)
    {
        sum +=(n%10);
        n/=10;
    }
    return sum;
}
int is_prime(int n)
{
    int ld= n%10;
    if(ld==2 || ld==3 || ld==5 || ld==7)
        return 1;
    else
        return 0;
}
