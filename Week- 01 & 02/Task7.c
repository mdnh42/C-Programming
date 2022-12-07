//#Write a c Program two integers as input and show who is bigger. If they are equal print as it is. See the sample input output for more classification.

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two integer numbers: ");
    scanf("%d%d", &num1, &num2);

    if(num1>num2)
    {
        printf("%d is bigger",num1);
    }
    else if(num2>num1)
    {
        printf("%d is bigger", num2);
    }
    else
    {
        printf("They are equal");
    }
}

