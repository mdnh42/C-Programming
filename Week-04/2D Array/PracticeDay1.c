#include<stdio.h>
int main()
{
    char ch[100];

    fgets(ch, sizeof(ch),stdin);

    char smuchelements = 0;
    for(int i=1; i<ch[i]; i++)
    {
        if(ch[i]>smuchelements)
        {
            smuchelements = ch[i];
        }

    }
    puts(smuchelements);



}
