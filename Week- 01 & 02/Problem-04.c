//4. Write a C program to find whether a given year is a leap year or not.

#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if(year%400 == 0)
    {
        printf("%d is a Leap Year. \n", year);
    }
    else if(year % 100 == 0)
    {
        printf("%d is not a Leap Year. \n", year);
    }
    else if(year % 4 == 0)
    {
        printf("%d is a Leap Year. \n", year);
    }
    else
        printf("%d is not a leap year \m", year);
}
