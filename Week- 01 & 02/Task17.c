#include<stdio.h>
int main()
{
    int n, choc, pack;
    printf("Enter your Chocolate: ");
    scanf("%d",&n);
    choc = n;
    pack = n;

    while(pack>=4)
    {
        choc += (pack/4);
        pack = (pack/4) + (pack%4);

    }
    printf("%d", choc);

    return 0;
}
