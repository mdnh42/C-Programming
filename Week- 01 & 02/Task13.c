/*you have got x marks in your exam. As you are a good and regular sudent,
if you ask your teacher he can give you at most y bonus marks.
Now you need to tell if you take bonus marks will you number became 100?
#include<stdio.h>*/

int main()
{
    int marks, bonus;
    printf("Enter you marks and bouus: ");
    scanf("%d%d", &marks, &bonus);

    if(marks+bonus>=100)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

}
