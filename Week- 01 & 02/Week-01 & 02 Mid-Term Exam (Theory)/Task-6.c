#include<stdio.h>
int main()
{
    int firstNum, secondNum;
    scanf("%d",&firstNum, &secondNum);

    if(firstNum%secondNum == 0)
    {
         printf("The second number is divisible by the first number.");
    }

    else if( secondNum%firstNum ==0)
    {
         printf("The first number is divisible by the second number.");
    }
    else

        printf("None of them are divisible by the other.");

    return 0;
}



#include <stdio.h>
int main() {
	int x, y;
	float div_result;
    printf("Input two numbers: ");
	printf("\nx: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

   if(y != 0)
     {
   		div_result = (float)x/(float)y;
		printf("%.1f\n", div_result);
	 }
	else
	 {
	 		printf("Division not possible.\n");
	  }
  return 0;
}
