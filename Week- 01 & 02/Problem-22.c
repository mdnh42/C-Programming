#include <stdio.h>

int main() {

    char name;
    double salary, bonus;
    scanf("%c",&name);
    scanf("%lf%lf",&salary,&bonus);

    printf("Total = R$ %.2f\n",salary+(bonus*15/100));

    return 0;
}
