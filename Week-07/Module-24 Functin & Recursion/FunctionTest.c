#include<stdio.h>
int take_raidus()
{
    int r;
    printf("Plase enter the raidus of a cirle: ");
    scanf("%d",&r);
    return r;
}

float calculate_area(int r)
{
    float area = 3.14159*r*r;
    printf("Area of the circle is %f\n", area);
}
int main()
{
    int r;
    r = take_raidus();
    float area = calculate_area(r);

    return 0;
}

//Radius
//#include<stdio.h>
//int take_raidus()
//{
//    int r;
//    printf("Plase enter the raidus of a cirle: ");
//    scanf("%d",&r);
//    return r;
//}
//int main()
//{
//    int r;
//    r = take_raidus();
//    float area = 3.14159*r*r;
//    printf("Area of the circle is %f\n", area);
//    return 0;
//}

//Sum Function
//#include<stdio.h>
//void solve()
//{
//     int a, b;
//     scanf("%d%d",&a, &b);
//     printf("%d\n",a+b);
//}
//int main()
//{
//    int t;
//    scanf("%d",&t);
//    for(int i =0; i<t; i++)
//    {
//        solve();
//    }
//    return 0;
//}
