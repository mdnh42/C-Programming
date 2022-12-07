#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char str[100];
    int i,j, count = 0;
    fgets(str, sizeof(str),stdin);

    for (i = 0; i <strlen(str); i++)
    {
        int re = 0;
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j] && i!=j)
            {
                re = 1;
                break;
            }
        }
        if (re == 0)
            printf("%c",str[i]);
    }

        if(count%2==0)
            printf("CHAT WITH HER");
        else
            printf("IGNORE HIM!");

    return 0;
}
