#include<stdio.h>
int main()
{
    int array[5]={22, 44, 143, 101,12}, sum=0;

    for(int i = 0; i<5; i++)
    {
        sum = sum + array[i]%10;
//        printf("%d ", array[i]%10);

    }
    printf("%d ", sum);


    return 0;
}
