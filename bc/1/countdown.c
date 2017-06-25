#include <stdio.h>

int main() {
    int value;
    
    scanf("%d", &value);
    for ( ; value > 0; value-- ) {
        printf("%d ", value);
    }
    
    printf("0\n");
    return 0;
}



// Считать с клавиатуры целое неотрицательное число.
// Вывести в строку убывающий ряд чисел от заданного до нуля.