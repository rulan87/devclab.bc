// В файле task.in дана строка длиной не более 100 символов.
// Прочитать строку в память и произвести ее реверс.
// Результат вывести в task.out.

// Пример ввода
// hello
// Пример вывода
// olleh

#include <stdio.h>

#define SIZE 101

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != 0; len++ );
    return len;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char array[SIZE];
    
    fscanf(in, "%s", array);
    fclose(in);
    
    for ( int i = 0, j = strLen(array) - 1; i < j; i++, j-- ) {
        int temp = array[i];
        
        array[i] = array[j];
        array[j] = temp;
    }
    
    fprintf(out, "%s\n", array);
    fclose(out);
    
    return 0;
}

