#include <stdio.h>

#define SIZE 10

void arraySort(int array[], int size) {
    
}

int main() {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int array1[SIZE] = {8, 4, 10, 24};
    int start = 3;
    int end = 8;
    
    sliceShiftRight(array, start, end);
    for ( int i = 0; i < SIZE - 1; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
