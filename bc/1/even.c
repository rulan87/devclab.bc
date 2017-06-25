// Считать с клавиатуры целое положительное число.
// Вывести в строку все чётные числа от нуля до указанного числа включительно.

#include <stdio.h>

int main() {
    int even;
    
    scanf("%d", &even);
    if ( even % 2 != 0 ) {
        even -= 1;
    }
    for ( int value = 0; value < even; value += 2 ) {
        printf("%d ", value);
    }
    printf("%d\n", even);
    
    return 0;
}

