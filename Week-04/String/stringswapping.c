#include<stdio.h>
int main()
{
    char str1[15] = "Bangladesh";
    char str2[15] = "Pakistan";

    char temp[15];

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("String One: is %s\n",str1);
    printf("String One: is %s\n",str2);
//    printf("String One: is %s\n",str1);




    return 0;
}
