#include <stdio.h>
#include<string.h>

int main ()
{
    int n,i;
    char ch[100];
    int t;
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
    }
    int len = strlen(ch[i]);
    int eng=0, pak=0;
    for(i=0; i<len; i++)
    {
        scanf("%s",ch);
        if(ch[i] == 'H')
        {
            eng++;
        }
        if(ch[i] == 'T')
        {
            pak++;
        }
    }

    for(i=1; i<n; i++)
    {
        if(eng>pak)
            printf("Egnland");
        if(eng<pak)
            printf("Pakis");
    }



    return 0;
}
