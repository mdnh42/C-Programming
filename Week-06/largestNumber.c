#include<stdio.h>
float max_of_three(float a, float b, float c);
int main()
{
    float a, b, c, m, n;
    scanf("%f",&n);
    for(float i = 0; i<n; i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        m = max_of_three(a, b, c);
        printf("The maximum value is %f\n",m);

    }

        return 0;
}


float max_of_three(float a, float b, float c)
{
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else
        return c;
}
