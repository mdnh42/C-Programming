#include <stdio.h>
#include <string.h>
void ascending_order(char str[100]);
int main()
{
    char str[100];
    scanf("%s", str);
    ascending_order(str);
    return 0;
}
void ascending_order(char str[100]){

    int len = strlen(str);
    int maximum = 26;
    int ascending[maximum + 1];
    for (int i = 0; i <= maximum; i++)
    {
        ascending[i] = 0;
    }

    for (int i = 0; i < len; i++)
    {
        ascending[(str[i] - 'a') + 1]++;
    }

    for (int i = 0; i <=maximum; i++)
    {
        if (ascending[i] != 0)
        {
            while (ascending[i] > 0)
            {

                printf("%c", i+96);
                ascending[i]--;
            }
        }
    }
}
