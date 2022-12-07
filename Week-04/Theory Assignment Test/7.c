#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[100] = "aaaa", ch2[100] = "Baaa", ch3[100] = "Caaa";

    int len = strlen(ch1);

    for(int i=0; i<len; i++)
    {
        if(ch1[i]>='A' && ch1[i]<='Z')
            ch1[i]+=32;
        if(ch2[i]>='A' && ch2[i]<='Z')
            ch2[i]+=32;
        if(ch3[i]>='A' && ch3[i]<='Z')
            ch3[i]+=32;

        if(ch1[i]<ch2[i] && ch3[i])
        {
            printf("aaaa");
            return 0;
        }
        else if(ch1[i]>ch2[i] && ch3[i])
        {
            printf("Baaa");
            return 0;
        }
        else
        {
            printf("Caaa");
            return 0;
        }
    }
    return 0;
}
