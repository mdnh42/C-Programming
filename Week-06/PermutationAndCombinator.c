#include<stdio.h>
#include<math.h>
int fact(int x);

int main()
{
    int n, r;
    scanf("%d %d",&n, &r);
    int perm, com;

    perm = fact(n)/fact(n-r);
    com = fact(n)/(fact(n-r)*fact(r));
    int ans = fact(n);

    printf("Factorial %d\n",ans);
    printf("nPr %d\n",perm);
    printf("nCr %d\n",com);
    return 0;
}


int fact(int x)
{
    int result = 1;
    for(int i = 1; i<=x; i++)
    {
        result *= i;
    }
    return result;
}

