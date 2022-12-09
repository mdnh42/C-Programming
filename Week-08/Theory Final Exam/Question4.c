//
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//void ascendingOrder(char* str, char* result);
//
//int main(){
//    char str[100], result[100];
//    printf("Enter a String \n");
//    gets(str);
//    ascendingOrder(str, result);
//    printf("Sorted string \n%s", result);
//
//    getch();
//    return 0;
//}
//
//
//void ascendingOrder(char* str, char* result){
//
//    int countArr[256] ={0}, length, counter, index;
//    length = strlen(str);
//
//    for(counter = 0; counter < length; counter++){
//        countArr[str[counter]]++;
//    }
//
//    for(counter = 0, index = 0; counter < 256; counter++){
//        if(countArr[counter] != 0){
//            while(countArr[counter] > 0){
//                result[index++] = counter;
//                countArr[counter]--;
//            }
//        }
//    }
//    result[index] = '\0';
//}

/*
Step-1: Takes input String;
Step-2: Sort the Array Acending Order.
Step-3: A to Z set Roll/Serial set 1 to 26
Step-4: Set the Each element 0
Step-5: A to Z Frequncy Set. [freq(str[i]- 'a' + 1)]
Step-6: String Travers Frequncy Array coressponding location increment.
Step-7: Total Character Counting
Step-8: Every time next smallest value and Corresponding character filter coming to each postion.

bbbbaccddd
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str, sizeof str, stdin);
    int len = strlen(str), largestElement=26;
    int i =0;
    printf("%s", str);
    int freq[largestElement+1];
    for(int i=0; i<=largestElement; i++)
    {
        freq[i] =0;
    }
    int total = 0;
    for(int i = 0; i<len; i++)
    {
        freq[(str[i] - 'a')+1]++;
    }
    for(int i=1; i<=26; i++)
    {
        if(freq[i]>=1)
        {
            total++;
        }
    }
    int nxt = 0;
    while(nxt != total)
    {
        int max = -1, index = -1;
        char ch;
        for(int i = 1; i<=26; i++)
        {
            if(freq[i]<max)
            {
                max=freq[i];
            ch = i-96;
            index = i;
            }

        }
        printf("next smalle- %d\n",max);
        printf("\n Character- %c\n\n",ch);
        for(int i=1; i>=max; i++)
        {
            printf("%c",ch);
        }
        freq[index] = 0;
        nxt++;
    }

    return 0;
}

