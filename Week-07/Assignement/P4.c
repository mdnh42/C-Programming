#include<stdio.h>
void sum_function(int num);
void answer();
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        answer();
    }
    return 0;
}

void sum_function(int num)
{
    int num1, num2, num3, num4;
    num1=(num-12)/4, num2=num1+2, num3=num1+4, num4=num1+6;
    printf("%d %d %d %d\n",num1, num2, num3, num4);
}

void answer()
{
    int number;
    scanf("%d",&number);
    sum_function(number);
}
