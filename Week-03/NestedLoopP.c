#include<stdio.h>
int main()
{
    int n, i=0;

    scanf("%d", &n);

    while(i<=n)
    {
        int j=0;
        while(j<=n)
        {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }
}

//
//#include<stdio.h>
//int main()
//{
//    int n, i, j;
//
//    scanf("%d", &n);
//
//    for(i=1; i<=n; i++)
//    {
//        for(j=1; j<=n; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//}
