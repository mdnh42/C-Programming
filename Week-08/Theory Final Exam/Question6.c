#include <stdio.h>
int sum(int a, int b);
int sub(int a, int b);

int main()
{
    int n1,n2, sumResult, subResult;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sumResult = sum(n1, n2);
    subResult = sub(n1, n2);
    printf("sum = %d\n",sumResult);
    printf("sub = %d",subResult);

    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a+b;
    return result;
}

int sub(int a, int b)
{
    int result;
    result = a-b;
    return result;
}
