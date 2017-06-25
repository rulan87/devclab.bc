// Вывести числовой квадрат заданного размера.
// Выведенные числа начинаются с единицы и постоянно увеличиваются.
// В каждой строке числа разделены пробелами.
// Размер считать с клавиатуры.

#include <stdio.h>

int main() {
    int size;
    int counter = 0;
    
    scanf("%d", &size);
    
    for ( int col = 0; col < size; col++ ){
        for ( int row = 1; row < size; row++) {
            counter += 1;
            printf("%d ", counter);
        }
        counter += 1;
        printf("%d\n", counter);
    }
    
    return 0;
}
