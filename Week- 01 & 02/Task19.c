#include<stdio.h>
int main()
{
    int choc, n, pack, i;
    printf("How much eat chocolate: ");
    scanf("%d",&n);

    choc = n;
    pack = n;

    while(pack>=4)
    {
        choc +=(pack/4);
        pack = (pack/4) + (pack %4);
    }
//    printf("%d",pack);
    printf("%d",choc);
}
