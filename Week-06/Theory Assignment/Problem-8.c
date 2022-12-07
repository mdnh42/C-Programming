#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str, sizeof str, stdin);
    int n;
    scanf("%d",&n);

    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            int size = str[i];
            int value = size+n;
            if(value>=122)
            {
                int dif = value - 122;
                str[i] = 96 + dif;
            }
            else
                str[i] +=n;
        }
    }

    printf("%s",str);

    return 0;
}
