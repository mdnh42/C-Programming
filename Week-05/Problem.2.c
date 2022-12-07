#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int x,y;
    scanf("%ld",&x);
    scanf("%ld",&y);

    printf("%ld", labs(x));
    printf("%ld", labs(y));

    return 0;
}
