#include <stdio.h>
#include<ctype.h>
int main()
{
    char str[1005];
    char ch[10]="CHAMPIONS";
    fgets(str, sizeof(str), stdin);

    int ans = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        for(int j=0; str[j] != '\0'; ++j)
        {
            if (ch[j] == tolower(str[i]))
                ans = 1;
        }

    }
    if(ans==1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}

