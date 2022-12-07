//#include<stdio.h>
//int main()
//{
//    int a, b, ans;
//    scanf("%d %d", &a, &b);
//    char c;
//    c = getchar();
//    getchar();
//
//    if(c== "+")
//    {
//        ans = a+b;
//    }
//    else
//        ans = a-b;
//
//    printf("Ans = %d",ans);
//    return 0;
//}

//
//#include<stdio.h>
//    int main()
//    {
//        int num = 10;
//        int a = num / -4;
//        int b = num % -4;
//        printf("%d %d\n", a, b);
//        return 0;
//    }


#include<stdio.h>
int main()
{
    int array[2][3]= {{10,20,30},{40,50,60}},i=1,j=0;
    array[i][j]=array[j][i];
    printf("%d,%d",array[i][j],array[j+1][i+1]);

    return 0;
}
