
#include<stdio.h>
int main()
{
    int choc, n, pack;
    printf("How much eat chocolate: ");
    scanf("%d",&n);

    choc = n;


    for(pack = n; pack>=4; pack = (pack/4) + (pack %4))
    {
        choc +=(pack/4);

    }
//    printf("%d",pack);
    printf("%d",choc);
}
