// Считать с клавиатуры целое положительное число.
// Вывести в строку все числа, кратные 3, от нуля до указанного числа включительно.

#include <stdio.h>

#define DIVISOR 3

int main() {
    int max;
    
    scanf("%d", &max);
    
    max -= max % DIVISOR;
    
    for ( int i = 0; i < max; i += DIVISOR ) {
        printf("%d ", i);
    }
    printf("%d\n", max);
    
    return 0;
}
