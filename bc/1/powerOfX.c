// Считать с клавиатуры целое основание и целый неотрицательный показатель. Вывести через пробел степени числа основания от нулевой до заданной.

#include <stdio.h>

int main() {
    int number, degree;
    int result = 1;
    
    scanf("%d %d", &number, &degree);
    
    for ( int i = 0; i < degree; i++ ) {
        printf("%d ", result);
        result *= number;
    }
    printf("%d\n", result);
    
    return 0;
}
