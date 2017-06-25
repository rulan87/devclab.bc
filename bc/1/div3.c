// Считать min, max. Вывести в столбик кратные тройке числа от min до max включительно.


#include <stdio.h>

#define DIVISOR 3

int main() {
    int min, max;
    int multiple;
    
    scanf("%d %d", &min, &max);
    
    multiple = min - min % DIVISOR;
    if ( multiple < min ) {
        multiple += DIVISOR;
    }
    
    for ( ; multiple <= max; multiple += DIVISOR ) {
        printf("%d\n", multiple);
    }
    
    return 0;
}
