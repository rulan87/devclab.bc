// Считать с клавиатуры целые числа min и max. Вывести в строку квадраты всех четных чисел в промежутке от min до max включительно. В указанном промежутке гарантированно существует как минимум 1 парное число.

#include <stdio.h>

int main() {
    int min, max;
    int value;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 != 0 ) {
        min -= 1;
    }
    for ( int i = min; i < max; i += 2 ){
        value = i * i;
        printf("%d ", value);
    }
    printf("%d\n", min);
    
    return 0;
}
