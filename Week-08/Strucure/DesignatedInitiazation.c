#include<stdio.h>
struct Student
{
    int roll;
    char name[100];
    int age;
    float weight;


};

int main()
{
    struct Student s1;
    scanf("%d %s %d %f",&s1.roll, &s1.name, &s1.age, &s1.weight);

    printf("%d\n %s\n %d\n %.lf\n",s1.roll, s1.name, s1.age, s1.weight);



    return 0;
}
