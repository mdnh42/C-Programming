#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    int temp;
    temp = number;
    int result, sum=0;
    while(temp!=0)
    {
        result = temp % 10;
        sum = sum + result;
        temp = temp/10;
    }
    printf("%d",sum);
    return 0;
}
