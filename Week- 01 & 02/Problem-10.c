//Write a C program to find the eligibility of admission for a professional course based on the following criteria:
//
//Eligibility Criteria :
//Marks in Maths >=65
//and Marks in Phy >=55
//and Marks in Chem>=50
//and Total in all three subject >=190 or Total in Maths and Physics >=140

#include<stdio.h>
int main()
{
    int mat, phy, che, total,mphy;
    printf("Enter your maths, phy che marks: ");
    scanf("%d %d %d \n", &mat, &phy, &che);
    if(mat>=65)
        if(phy>=55)
            if(che>=50)
                total = mat+phy+che;
                mphy = mat + phy;
                if(total == 190 || mphy == 140)
                    printf("Eligible");

            else
                printf("not eligible");


}
