#include <stdio.h>

int main() {

    float A, B, C, sum;
    scanf("%f%f%f",&A,&B,&C);

    sum = (A*2+B*3+C*5);
    printf("MEDIA = %.1f \n",sum/(2+3+5));
    return 0;
}
