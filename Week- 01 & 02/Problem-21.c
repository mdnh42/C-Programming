#include <stdio.h>

int main() {

    int Number, Hour;
    float payment;
    scanf("%d%d",&Number,&Hour);
    scanf("%f",&payment);

    printf("NUMBER = %d\n",Number);
    printf("SALARY = U$ %.2f\n",Hour*payment);
    return 0;
}
