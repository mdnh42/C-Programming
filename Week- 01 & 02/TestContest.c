#include <stdio.h>


int main() {

    int A, B, DIF;
    scanf("%d%d",&A,&B);
    if(A>B)
        DIF = A-B;
    else
        DIF= B-A;

    printf("%d", DIF);

    return 0;
}
