#include<stdio.h>
int main()
{
    char name[2000];
    scanf("%s",name);

    int i, len = strlen(name);

    for(i=0; i<=len; i++)
    {
        if(i==0)
        {
            if(name[i]='a' && name[i]<='z')
                name[i]=name[i]-32;
            printf("%s",name);
        }
        else
        {

        }
    }


    return 0;
}
