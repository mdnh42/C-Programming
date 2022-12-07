#include<stdio.h>
int leap(int y)
{
    if((y%400==0) || (y%4 == 0) && (y%100 != 0))
        return 1;
    else
        return 0;
}
int is_distict(int n)
{
    int ld, count_digit[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while(n>0)
    {
        ld= n%10;
        count_digit[ld]++;
        n/=10;
    }
    for(int i=0; i<10;i++)
    {
        if(count_digit[i]>1)
            return 0;
    }
}
int main()
{
    int year;
    scanf("%d",&year);
    if(leap(year)==1 && is_distict(year)==1)
        printf("Bea");
    else
        printf("Ug\n");
    return 0;
}
