#include <stdio.h>
#include <string.h>
void swaping(char* str1, char* str2)
{
    char temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
int main ()
{
    char str[100];

    int i, j,len;
    scanf("%s",str);
    len = strlen(str);
    for (i = 0; i<len; i++)
    {
        for (j = 0; j < len-i-1; j++)
        {
            if (str[j]<str[j+1])
            {
                swaping(&str[j], &str[j+1]);
            }
        }
    }
    printf("%s", str);
    return 0;
}

