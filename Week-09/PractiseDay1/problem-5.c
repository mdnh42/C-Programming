#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}

int sum(int n)
{
    if(n<= 1)
        return n;
    
    return n+sum(n-1);
    
}