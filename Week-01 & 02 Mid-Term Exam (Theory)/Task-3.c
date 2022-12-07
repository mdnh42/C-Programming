#include<stdio.h>

int main()
{
    long long int n, i;
    int count = 0;
    scanf("%lld", &n);

    for(i=0; i<n!=0; i++)
    {
        n = n %10;
        count++;

    }
    printf("%d digits", count);
}

