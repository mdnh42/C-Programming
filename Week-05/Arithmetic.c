#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, d, m, q, r; 
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Sum is %d\n",a+b);
    printf("Sub is %d\n",a-b);
    printf("Mul is %d\n",a*b);
    printf("Divide is %d\n",a/b);
    printf("Remainder is %d\n",a%b);

    int p, x;
    scanf("%d",&x); 
    p = pow(b,x);
    printf("%d power of %d is %d\n", b, x, p);

    float s; 
    s = sqrt(49);
    printf("\nSquare roort %f", s);

    
    return 0;
}