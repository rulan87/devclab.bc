// Считать с клавиатуры целое неотрицательное число. Вывести через пробел степени числа 2 от нулевой до заданной. Использовать цикл.

#include <stdio.h>

int main() {
    int grade;
    int power = 1;
    
    scanf("%d", &grade);
    
    for ( int i = 0; i < grade; i++ ) {
        printf("%d ", power);
        power *= 2;
    }
    printf("%d\n", power);
    
    return 0;
}
