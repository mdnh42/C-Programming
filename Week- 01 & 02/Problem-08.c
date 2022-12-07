//Write a C program to find the largest of three numbers.

#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1>num2 && num1>num3)
        printf("Num1 is largest: %d \n", num1);
    else if(num2>num1 && num2>num3)
        printf("Num2 is largest: %d \n", num2);
    else if(num3>num1 && num3>num2)
        printf("Num3 is largest number: %d \n", num3);
    else
        printf("Number is equal or invalid");
    return 0;
}
