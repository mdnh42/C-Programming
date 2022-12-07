#include<stdio.h>
int main()
{
    char a[10];
    char ch = 'a';
    for(int i = 0; i<8; i++)
    {
        a[i] = ch+8-i;
    printf("%c ",a[i]);
    printf("%d ",a[i]);
    }
    a[8] = '\0';


    return 0;
}
