
#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,sizeof (str), stdin);
    int i=0, ans =0, binary=0;
    while(str[i] != '\0')
    {
        if(str[i] == '0' || str[i]=='1')
        {
            ans = 1;
            break;
        }
        i++;
    }
    if(ans == 0)
    {
        printf("Yes");
    }
    else
        printf("No");


    return 0;
}
