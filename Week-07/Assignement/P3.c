
#include<stdio.h>
int main()
{
    int x, y;
    int* ptrX;
    int* ptrY;
    ptrX = &x;
    ptrY = &y;
    scanf("%d%d",ptrX, ptrY);

    printf("%d %d", *ptrX, *ptrY);

    return 0;
}
