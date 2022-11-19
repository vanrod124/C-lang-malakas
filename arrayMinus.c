#include <stdlib.h>
#include <stdio.h>


int main (int argc, char *argv[]) {
    // create Array for A size of 10 and create Array for B size of 9.
    // input of user to get the values of A

    int A[10];
    int B[9];
    int i;
    int j;

    printf("Enter 10 numbers for A: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    // minus the index 0 of A from the index 1 of A and store it in B
    for (i = 0; i < 9; i++) {
        B[i] = A[i] - A[i+1];
    }

    // print out the values of B
    printf("B = ");
    for (i = 0; i < 9; i++) {
        printf("%d ", B[i]);
    }
}
