#include<stdio.h>
int determine_grade(int mark);
int main()
{
    int mark;
    scanf("%d",&mark);

    printf("%c", determine_grade(mark));
}

int determine_grade(int mark)
{
    if(mark>=80 && mark<=100)
        return 'A';

    else if(mark>=60 && mark<=79)
        return 'B';

    else if(mark>=40 && mark<=59)
        return 'C';

    else if(mark>=0 && mark<=39)
        return 'F';
    else
        return 'Invalid';
}
