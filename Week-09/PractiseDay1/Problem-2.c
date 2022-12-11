#include<stdio.h>
int sumofDigts(int digit[], int num)
{
    if(digit==0)
        return 0; 
    return ((digit%10)+sumofDigts(digit/10));
}
int main()
{
    int num, sum, digit[num]; 
    scanf("%d", &num);
    for(int i=0; i<num; i++)
    {
        scanf("%d",&digit[i])
    }
    sum = sumofDigts(digit, num);

    printf("%d", sum);
    return 0; 
}