//Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.

#include<stdio.h>
int main()
{
    int co1, co2;
    printf("Input the values for X and y coordinate: ");
    scanf("%d %d", &co1, &co2);

    if(co1>0 && co2 >0)
        printf("The coordinate point (%d, %d) lies in the first quandrant. \n", co1, co2);
    else if (co1<0 && co2>0)
        printf("The coordinate point (%d, %d) lies in the Second quandrant. \n", co1, co2);
    else if (co1<0 && co2<0)
        printf("The coordinate point (%d, %d) lies in the Third quandrant. \n", co1, co2);
        else if (co1>0 && co2<0)
        printf("The coordinate point (%d, %d) lies in the Second quandrant. \n", co1, co2);

        else if (co1 == 0 && co2 == 0)
        printf("The coordinate point (%d, %d) lies in the origin. \n", co1, co2);
}
