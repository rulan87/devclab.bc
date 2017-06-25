// int arrayScan(FILE *in, int array[], int limit)
// Считать из файла in не более limit элементов в массив array.
// Вернуть количество считанных элементов.

int arrayScan(FILE *in, int array[], int limit) {
    int len;
    
    for ( len = 0; len < limit && fscanf(in, "%d", &array[len]) == 1; len++ );
    return len;
}
