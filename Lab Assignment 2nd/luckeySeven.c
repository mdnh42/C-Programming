#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        char str[90];
        int len, startIndex, endIndex;
        scanf("%s",str);
        len = 0;
        while(str[len] != '\0') len++;
        startIndex = 0;
        endIndex   = len-1;
        while(startIndex <= endIndex)
        {
            if(str[startIndex] != str[endIndex])
                break;
            startIndex++;
            endIndex--;
        }
        if(startIndex >= endIndex)
        {
            if(len>7)
            {
                printf("Case #2: %c%d%c\n",str[0],len-2,str[len-1]);
            }
            else if(len<=7)
                printf("Case #3: %s\n",str);
        }
        else
        {
            printf("Case #1: Not Palindrome\n");
        }
    }
}
