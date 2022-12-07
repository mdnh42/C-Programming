#include<stdio.h>
struct Student
{
    int roll;
    double marks;
    char name[50];
};
void printStudent(int n, struct Student s)
{
    printf("Student Infor: %d\n",n);
    printf("%d\n",s.roll);
    printf("%s\n",s.name);
    printf("%lf\n",s.marks);
}
int main()
{
    struct Student cls[5];
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%d",&cls[i].roll);
        scanf("%s",cls[i].name);
        scanf("%lf",&cls[i].marks);
    }

    for(i=0; i<5; i++)
    {
        if(cls[i].roll%2==0)
            printStudent(i, cls[i]);
    }

    printf("Marks sum\n\n");
    double summ = 0;
    for(i=0; i<5; i++)
    {
        if(cls[i].roll%2==0)
            summ+=cls[i].marks;
    }
    printf("Total Marks %lf",summ);
    return 0;
}
/*
25
Mlkakjf
52.0

35
ajklfjs
25.20

45
asfjl;kvas
25.20

54
asfkjsaf
35

54
kljvio
63.0
*/
