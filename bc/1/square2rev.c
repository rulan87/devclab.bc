// Вывести числовой квадрат заданного размера.
// Выведенные числа начинаются с единицы и постоянно увеличиваются.
// В каждой строке числа разделены пробелами.
// Порядок строк обратный.
// Размер считать с клавиатуры.
#include <stdio.h>

int main() {
    int size;
    int end;
    
    scanf("%d", &size);
    
    for ( int col = size; col > 0; col-- ){
        for ( int row = size - 1; row > 0; row--) {
            end = size * col - row;
            printf("%d ", end);
        }
        end = size * col;
        printf("%d\n", end);
    }
    
    
    return 0;
}
