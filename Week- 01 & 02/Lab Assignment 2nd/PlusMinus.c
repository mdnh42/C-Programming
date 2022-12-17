#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int n, i=0, count=0;
    scanf("%d",&n);

        char s[20];
        scanf("%s",s);
        int len = strlen(s);


    while(s[i]<len)
    {
        if(s[i] == '+')
        {
            count++;
        }
        i++;
    }

    printf("%d\n",len);


    return 0;
}


