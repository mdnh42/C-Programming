#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    fgets(str, sizeof str, stdin);
    int len = strlen(str)-1;
    for(int i = 0; i<len; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
        else
            str[i]-=32;
    }
    printf("%s", str);

    return 0;
}
