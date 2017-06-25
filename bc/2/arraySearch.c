// Написать функцию, возвращающую индекс искомого числа в массиве либо -1 в случае, если число в массиве не содержится.

void arrayReverse(int array[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        int exchange = array[i];
        
        array[i] = array[j];
        array[j] = exchange;
    }
}


