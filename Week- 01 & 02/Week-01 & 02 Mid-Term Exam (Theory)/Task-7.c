
#include <stdio.h>
int main()
{
    int n1, n2, i=1, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);


    while(i<=n1 && i<=n2)
    {

        if(n1%i==0 && n2%i==0)
            gcd = i;
        i++;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
