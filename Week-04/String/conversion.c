#include<stdio.h>
int main()
{
    char str[100];
    int i, vowel, conso, digit, word, other;

    printf("Enter a string: ");
    gets(str);

    i = vowel=conso=digit=word=other = 0;
    char ch;
    while(ch=str[i] != '\0')
    {
        if(ch== 'a' || ch == 'e' ||ch== 'i' || ch == 'o' || ch == 'u' || ch== 'A' || ch == 'E' ||ch== 'I' || ch == 'O' || ch == 'U' )
        {
            vowel++;
        }
        else if(ch>= 'a' && ch<= 'z' || ch>= 'A' && ch<= 'Z')
        {
            conso++;
        }
        else if(ch>= '0' && ch<='9' )
            digit++;

        else if(ch== ' ')
            word++;

        else
            other++;

        i++;
    }

    word++;


    printf("Number of Vowel: %c", vowel);
    printf("Number of consonat: %c", conso);
    printf("Number of Word: %c", word);
    printf("Number of digit: %d", digit);
    printf("Number of special cha: %d", other);
    return 0;
}
