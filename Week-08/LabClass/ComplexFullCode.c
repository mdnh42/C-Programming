
#include<stdio.h>
struct Comp
{
    double real;
    double img;
};
void printComp(struct Comp c)
{
    printf("%.1lf + %.1lfi\n",c.real, c.img);

}
struct Comp add_Comp(struct Comp n1, struct Comp n2)
{
    struct Comp ans;
    ans.real = n1.real + n2.real;
    ans.img = n1.img + n2.img;
    return ans;
};
struct Comp multiply_Comp(struct Comp n1, struct Comp n2)
{
    struct Comp ans;
    ans.real = n1.real*n2.real - n1.img*n2.img;
    ans.img = n1.real*n2.img + n2.real*n1.img;
    return ans;
};
struct Comp sub_Comp(struct Comp n1, struct Comp n2)
{
    struct Comp ans;
    ans.real = n1.real - n2.real;
    ans.img = n1.img - n2.img;
    return ans;
};

int main()
{
    struct Comp s1 = {5.9, 3.1};
    struct Comp s2 = {-2.5, 3.7};
    printComp(add_Comp(s1, s2));
    printComp(sub_Comp(s1, s2));
    printComp(multiply_Comp(s1, s2));

    return 0;
}

