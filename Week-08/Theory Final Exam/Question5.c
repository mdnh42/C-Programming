# include <stdio.h>
# include <stdlib.h>

int main ()
{
    int size, i, *my_array;

    printf("\n Please type the size of array: ");
    scanf("%d", &size);

    my_array=(int*)malloc(size * sizeof(int));

    printf("\n Enter the values of Array:  ");

    for (i=0; i<size; i++)
        scanf("%d", &my_array[i]);


    printf("\n The values in the array are: ");
    for (i=0; i<size; i++)
        printf("%d  ", my_array[i]);


    printf("\n");

    return 0;
}
