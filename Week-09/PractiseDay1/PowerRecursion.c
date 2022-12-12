#include<stdio.h>
#include<math.h>
int power_function(int base, int a)
{
    if(a!=0)
        return (base * power_function(base, a-1));
    else
        return 1; 
}
int main()
{
    int base, a; 
    scanf("%d %d", &base, &a);
    int result = power_function(base, a);
    printf("%d^%d = %d", base, a, result);
}