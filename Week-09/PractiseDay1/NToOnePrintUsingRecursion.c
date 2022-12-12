#include <stdio.h>
void printNumber(int i, int n);
int main()
{
    int i=1, n;
    scanf("%d", &n);
    printNumber(i, n);
    return 0;
}

void printNumber(int i, int n)
{
    if(i > n)
        return;
    printNumber(i + 1, n);
    printf("%d, ", i);
    
}