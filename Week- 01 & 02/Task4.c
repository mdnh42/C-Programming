//Task:4 Write a C program to take two positive integers as input and show the summation, subtraction and multiplication of those two numbers.
//

int main()
{
    int num1, num2;
    printf("Enter two positive integers:");
    scanf("%d %d", &num1, &num2);

    printf("Num1 and Num2 Summation is: %d \n", num1+num2);
    printf("Num1 and Num2 Subtration is: %d \n", num1-num2);
    printf("Num1 and Num2 Multiplication is: %d \n", num1*num2);

    return 0;
}
