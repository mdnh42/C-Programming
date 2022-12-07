#include<stdio.h>

int main ()
{
    int base, height;
    float areaOfRectangle;

    printf("Enter your base: ");
    printf("enter your hight: ");
    scanf("%d %d", &base, &height);

    areaOfRectangle = 0.5 * base * height;

    printf("Area of Rectangle is : %f", areaOfRectangle);


    return 0;
}
