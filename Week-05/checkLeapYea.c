#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%4 ==0)
    {
            printf("Yes Leap Year");
    }
     if(year%100 ==0)
    {
        printf("Leap");
    }
     if(year%400==0)
    {
        printf("Le");
    }
    else
    {
        printf("Not leap year");
    }
    return 0;
}
