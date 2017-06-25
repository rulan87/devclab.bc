// Считать с клавиатуры целое положительное число. Если число является целой степенью двойки, вывести "yes", иначе вывести "no".

// Пример ввода
// 8
// Пример вывода
// yes

#include <stdio.h>

int powerOf2(int exponent) {
    return 1 << exponent;
}

int main() {
    int number;
    int i;
    
    scanf("%d", &number);
    
    for ( i = number; i > 0 ; i >> 1 );
        
    if ( i == 1 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
