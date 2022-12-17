#include<stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[105];
    scanf("%s", s);
    int len = strlen(s);
    int largestElement=26;
    int freq[largestElement+1];
    for(int i=0; i<=largestElement; i++)
        freq[i]=0;

    for(int i=0; i<len; i++)
        freq[(s[i]-'a')+1]++;

    int unique=0;
    for(int i=1; i<=largestElement; i++)
    {
        if(freq[i]==1)
            unique++;
    }
    printf("%d\n",unique);
    return 0;
}
