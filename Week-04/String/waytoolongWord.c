#include<string.h>
#include<stdio.h>
int main()
{

    int n;
    char name[1000];
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%s",&name);
        int l = strlen(name);

        if(l>10)
        {
            printf("%c%d%c\n", name[0], l-2, name[l-1]);
        }
        else
        {
            printf("%s\n",name);
        }
    }


    return 0;
}
