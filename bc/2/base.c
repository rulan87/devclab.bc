// Считать с клавиатуры целое неотрицательное число в десятичной системе счисления и основание новой системы счисления (целое число от 2 до 10).
// Вывести в консоль число, записанное в новой системе счисления.
// Задача решается без массивов.

#include <stdio.h>

int main() {
    int current, base;
    int level = 1;
    
    scanf("%d %d", &current, &base);
    
    for ( ; current / level >= base; level *= base );
    for ( ; level >= 1; ) {
        printf("%d", current/level);
        current %= level;
        level /= base;
    }
    printf("\n");
    
    return 0;
}
