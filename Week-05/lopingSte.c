#include<stdio.h>
int main()
{
    int i, sum = 0;
    for(i=1; i<=5; i++)
    {
        if(i%2==0)
            sum = sum + pow(i,3);
        else
            sum = sum - pow(i,3);
    }
    printf("The sum is %d",sum);
    return 0;
}
