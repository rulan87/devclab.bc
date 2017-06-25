// Вывести числовой квадрат заданного размера.
// В каждой строке числа идут с единицы через пробел.
// Размер считать с клавиатуры.

#include <stdio.h>

int main() {
    int total;
    
    scanf("%d", &total);
    
    for ( int line = 1; line <= total; line++ ) {
        for ( int tab = 1; tab < total; tab++ ) {
            printf("%d ", tab);
        }
        printf("%d\n", total);
    }
    return 0;
}
