#include<stdio.h>
int main()
{
    int num1, num2, num3, num4;
    printf("Enter 4 distinct integer: num1, num2, num3, num4: ");
    scanf("%d %d %d %d", &num1, &num2, &num3,&num4);

    // check a, b, c, d which is largest number.
    if(num1> num2 && num1> num3 && num1> num4)
        printf("Largest = %d\n",num1);

    if(num2> num1 && num2> num3 && num2> num4)
        printf("Largest = %d\n",num2);

    if(num3> num1 && num3> num2 && num3> num4)
        printf("Largest = %d\n",num3);

    if(num4> num1 && num4> num2 && num4> num3)
        printf("Largest = %d\n",num4);

    // check which is smallest number:

    if(num1<num2 && num1<num3 && num1<num4)
        printf("Smallest = %d\n",num1);

    if(num2<num1 && num2<num3 && num2<num4)
        printf("Smallest = %d\n",num2);

    if(num3<num1 && num3<num2 && num3<num4)
        printf("Smallest = %d\n",num3);

    if(num4<num1 && num4<num2 && num4<num3)
        printf("Smallest = %d\n",num4);


return 0;

}
