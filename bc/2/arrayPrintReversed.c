// Написать функцию:
// void arrayPrintReversed(int array[], int size)
// Распечатать массив на экран в строку через пробел в обратном порядке.

void arrayPrintReversed(int array[], int size) {
    int last = size - 1
    
    for ( int i = size; i >= size; i-- ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[size]);
}
