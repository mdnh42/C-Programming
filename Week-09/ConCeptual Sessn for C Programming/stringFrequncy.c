#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int largestElement = 26;
    int freq [largestElement+1];
    for(int i=0; i<=largestElement; i++)
    {
        freq[i] =0;
    }
//    for(int i = 1; i<=largestElement; i++)
//    {
//        printf("i-> %d, %d \n",i, freq[i]);
//    }

    for(int i=0; i<strlen(s); i++)
        freq[(s[i]-'a')+1]++;

    for(int i = 1; i<=largestElement; i++)
    {
        printf("i-> %d, %d \n",i, freq[i]);
    }

    int unique =0, duplicate =0;
    for(int i=1; i<=largestElement; i++)
    {
        if(freq[i] == 1)
        {
            unique ++;
        }
        else if(freq[i]>1)
        {
            duplicate++;
        }
    }
    printf("Unique = %d\n",unique);
    printf("DUplicate = %d\n",duplicate);
    return 0;
}
