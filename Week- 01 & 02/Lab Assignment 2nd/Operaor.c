#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char s[20];
    scanf("%s",s);
    int i = 0;
    int a, b, sum=0, temp=0;
    scanf("%d%d",&a, &b);
    int len = strlen(s);

    while(i<len)
    {
        if(s[i] == '+')
        {
            temp = a + b;
            sum += temp;

        }
        else if(s[i] == '*')
        {
            temp = a*b;
            sum += temp;
        }
        i++;
    }

    printf("%d\n",sum);


    return 0;
}

