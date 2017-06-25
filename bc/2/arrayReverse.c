// Написать функцию:
// void arrayReverse(int array[], int size)

// Использование дополнительного массива не разрешается.

void arrayReverse(int array[], int size) {
    for ( int i = size - 1, k = 0; k < i, i >= 0; k++, i-- ) {
        array[k] = array[i];
        array = array[k]
    }
}
