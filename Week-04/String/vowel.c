#include<stdio.h>

int main()
{
    char name[1000];


    fgets(name,sizeof(name),stdin);
    int i = 0, vowel =0, cons=0;
    while(name[i]!='\0')
    {
        if(name[i] == 'a' || name[i] == 'A' || name[i] == 'a' || name[i] == 'e'||name[i] == 'E' || name[i] == 'i' || name[i] == 'I' || name[i] == 'o' || name[i] == 'O' || name[i] == 'u'|| name[i] == 'U')
        {
            vowel++;
        }
        else
            cons++;

        i++;
    }
    printf("Vowel: %d",vowel);
    printf("Consonant: %d",cons);
    return 0;
}
