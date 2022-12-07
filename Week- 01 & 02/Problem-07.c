//
//Write a C program to accept the height of a person in centimeter and categorize the person according to their height.

#include<stdio.h>
int main()
{
    float perHeight;

    printf("input the height of the person (in centimetres) : ");
    scanf("%f", &perHeight);
    if(perHeight < 150.0)
        printf("The person is Dwarf. \n");
    else if ((perHeight>=150.0) && (perHeight < 165.0))
        printf("The person is average heighted. \n");
    else if (perHeight >=165.0 && perHeight <=195.0)
        printf("The person is taller. \n");
    else
        printf("Abnormal height. \n");
}
