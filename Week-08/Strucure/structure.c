#include<stdio.h>
struct Student{
    int roll;
    int age;
    float weight;
    char name[50];

};

int main()
{
    int a;
    struct Student s = {12, 24, 75.6, "MD Nur Hasan"};

    printf("Roll = %d\nAge = %d\nWeight = %f\nName=%s\n", s.age, s.roll, s.weight, s.name);

    return 0;
}
