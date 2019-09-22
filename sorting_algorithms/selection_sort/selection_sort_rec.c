//Selection sort algorithm using recursion
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

/*
 * Prototypes
*/
void selection_sort(int* A, int length, int i_min, int i);
/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {

    //create an array with values
    int A[6] = {5, 2, 1, 9, 45, 1};

    //sorting the array using selection sort

    for (int i = 0; i < 6; i++)
    {
        selection_sort(A, 6, i, i);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%i\t", A[i]);
    }
    printf("\n");
}

/*
 * Functions
*/

void selection_sort(int* A, int length, int i_min, int i) {

    if (length == 1)
        return;

    if (i > length)
        return;

    if (A[i_min] > A[i])
    {
        int temp = A[i];
        A[i] = A[i_min];
        A[i_min] = temp;
    }

    selection_sort(A, length, i_min, ++i);
    return;

}