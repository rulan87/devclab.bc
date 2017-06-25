// Считать min, max. Вывести в столбик кратные пяти числа от min до max включительно.

#include <stdio.h>

#define DIVISOR 5

int main() {
    int min, max;
    int multiple;
    
    scanf("%d %d", &min, &max);
    
    multiple = min - min % 5;
    if ( multiple < min ) {
        multiple += DIVISOR;
    }
    for ( ; multiple <= max; multiple += DIVISOR ) {
        printf("%d\n", multiple);
    }
    return 0;
}
