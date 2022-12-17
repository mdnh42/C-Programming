#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10010];
    char newString[10000][10000];
    int i, j, counter;
    fgets(str, sizeof str, stdin);

    j=0; counter = 0;

    for(i=0; i<=(strlen(str));i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            newString[counter][j] = '\0';
            counter++;
            j=0;
        }
        else
        {
            newString[counter][j]= str[i];
            j++;
        }
    }
    for(i=0; i<counter; i++)
        printf("%s\n", newString[i]);

    return 0;
}
