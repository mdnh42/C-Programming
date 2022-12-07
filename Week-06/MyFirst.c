#include<stdio.h>

int myFunction(int x, int y)
{
    printf("Pera nai! chill!\n");

    return x+y;
}

int main()
{
    int a,b;
    a = myFunction(15,10);
    printf("%d\n",a);
    b = myFunction(25, 20);
    printf("%d\n",b);
    return 0;
}
