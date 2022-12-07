#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c; 
    printf("Enter the three sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    float s = (a+b+c)/2.0;
    printf("Half perimeter: %f", s);

    double area = s*(s-a)*(s-b)*(s-c);
    area = sqrt(area);
    printf("\nArea: %lf",area);
    return 0; 
}