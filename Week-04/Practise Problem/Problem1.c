#include<string.h>
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    for(int i = 0; i<N; i++)
    {
        char ch[100];
        fgets(ch, sizeof(ch),stdin);
        printf("%c",ch[i]);
    }

    return 0;
}
