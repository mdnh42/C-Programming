//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//    printf("3 to the power 2 %.2f \n",pow(3,2));
//    printf("Root %.2f \n",sqrt(16));
//    printf("Absolute %d \n",abs(-19));
//    printf("sin %d \n",sin(3.1415));
//    return 0;
//}

//
//#include<stdio.h>
//void fun(int n)
//{
//    if(n>0)
//    {
//        fun(n-1);
//        printf("%d ",n);
//    }
//}
//int main()
//{
//    int x=4;
//    fun(x);
//    return 0;
//}
//
//#include<stdio.h>
//int value=2;
//void foo(int n)
//{
//    value*=2;
//}
//int main()
//{
//    printf("%d \n",value);
//    return 0;
//}


#include<stdio.h>
int value=3;
void foo(int n)
{
    value*=2;
}
int main()
{
    printf("%d \n",value);
    foo(2);
    return 0;
}
