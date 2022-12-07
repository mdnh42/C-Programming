#include<stdio.h>

int main() {

   int matrix[3][3], i, j, check, check1, check2, result = 0;

   printf("Please Enter A 3 X 3 matrix : ");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++)
         scanf("%d", &matrix[i][j]);
   }

   check = 0;
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         if (i ==j)
            check = check + matrix[i][j];
      }
   }

   for (i = 0; i < 3; i++) {
      check1 = 0;
      for (j = 0; j < 3; j++) {
         check1 = check1 + matrix[i][j];
      }
      if (check == check1)
         result = 1;
      else {
         result = 0;
         break;
      }
   }

   for (i = 0; i < 3; i++) {
      check2 = 0;
      for (j = 0; j < 3; j++) {
         check2 = check2 + matrix[i][j];
      }
      if (check == check2)
         result = 1;
      else {
         result = 0;
         break;
      }
   }
   if (result == 1)
      printf("\nYES\n");
   else
      printf("\nNO\n");

   return 0;
}
