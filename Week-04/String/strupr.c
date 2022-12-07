#include<stdio.h>

int main()
{
    char str[] = "MD Nur Hasan";

    strupr(str);

    printf("Str = %s\n",str);
    printf("Str = %s\n",strlwr(str));

    return 0;
}
