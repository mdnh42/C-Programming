#include<stdio.h>

int main()
{
    int r;
    float areaofcircle;
    printf("Enter the radius of a circle: ");
    scanf("%d", &r);
    areaofcircle = 3.14159 * r * r;

    printf("AreaOfCircle is %f", areaofcircle);

    return 0;
}
