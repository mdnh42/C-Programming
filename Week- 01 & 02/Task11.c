//Write a c program to take one non-negative integer as input and print the grade according to that input the grade system is shown below.

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks>=0 && marks<=32)
    {
        printf("Fail");
    }
    else if(marks>=33 && marks<=39)
    {
        printf("D");
    }
    else if(marks>=40 && marks<=49)
    {
        printf("C");
    }
    else if(marks>=50 && marks<=59)
    {
        printf("B");
    }
    else if(marks>=60 && marks<=69)
    {
        printf("A-");
    }
    else if(marks>=70 && marks<=79)
    {
        printf("A");
    }
    else if(marks>=80 && marks<=100)
    {
        printf("a+");
    }
    else
    {
        printf("Invalid");
    }
}
