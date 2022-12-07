#include<stdio.h>
#include<string.h>
void broken_key(char s[]);
int main()
{
    char s[100];
    scanf("%s",s);
    broken_key(s);
    return 0;
}

void broken_key(char s[])
{
    int len=strlen(s);
    for(int i=0; i<len; i++)
    {
        if(i%2==1)
        {
            printf("%c%c",s[i],s[i]);
        }
        else
            printf("%c",s[i]);
    }
}
