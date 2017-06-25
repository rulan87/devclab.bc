// Вывести числовую пирамидку на total строк. Порядок строк – обратный.
// В каждой строке числа идут от единицы до номера строки через пробел.

#include <stdio.h>

int main() {
    int total;
    int end;
    
    scanf("%d", &total);
    
    for ( int col = total - 1; col >= 0; col-- ) {
        for ( int row = total; row > col; row-- ) {
            end = total * col + row;
            printf("%d ", end);
        }
        end = total * col;
        printf("%d\n", end);
    }
    
    return 0;
}
