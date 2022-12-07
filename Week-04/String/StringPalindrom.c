#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];

    fgets(str1, sizeof(str1),stdin);

    int i = 0, len =0, j;

    while(str1[i] != '\0')
    {
        i++;
        len++;
    }
    for(j=0, i= len-1; i>=0; i--, j++)
    {
        str2[j] = str1[i];
    }

    printf("%s",str1);
    printf("%s",str2);

    int d =strcmp(str1,str2);
    if(d==0)
        printf("\nString Palidrom");

    else
        printf("\nIs not Palindrom");

    return 0;
}
