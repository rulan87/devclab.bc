#include <stdio.h>

int main() {
    int value;
    
    scanf("%d", &value);
    
    for ( int natural = 1; natural < value; natural++ ) {
        printf("%d ", natural);
    }
    printf("%d\n", value);
    return 0;
}


// Считать с клавиатуры целое положительное число.
// Вывести в строку через пробел по порядку все натуральные числа, не превышающие заданное.