#include<stdio.h>
int f_number(char ch,char ar[3000]);
int main()
{
    int n;
    char str[2000];
    printf("Enter your input: ");
    scanf("%s",str);
    if(f_number('1',str)==1 && f_number('7',str)==1 && f_number('9',str)==1)
    {
        printf("Yes\n");
    }
    else
        printf("No\n");

    return 0;
}

int f_number(char ch,char str[3000])
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            return 1;
        }
        i++;
    }
}
