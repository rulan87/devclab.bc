// В файле task.in дано искомое число needle, а также последовательность чисел размером не более 100 элементов.
// Найти needle в массиве и вывести в файл task.out его индекс либо -1, если число не найдено.

#include <stdio.h>

#define SIZE 100

int lsearch(int array[], int needle, int size) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] == needle ) {
            return i;
        }
    }
    return -1;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[SIZE];
    int needle;
    int size = 1;
    
    fscanf(in, "%d", &needle);
    
    for ( int i = 0; i < SIZE && fscanf(in, "%d", &array[i]) == 1; i++ ) {
        size += 1;
    }
    fprintf(out, "%d\n", lsearch(array, needle, size));
    
    fclose(in);
    fclose(out);
    
    return 0;
}

