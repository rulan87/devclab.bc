// Считать с клавиатуры три целых числа - первый член, шаг и количество членов арифметической прогрессии. 
// Вывести в строку через пробел члены заданной прогрессии.
// Задаваемое количество больше нуля.

#include <stdio.h>

int main() {
    int counter, step, amount;
    
    scanf("%d %d %d", &counter, &step, &amount);
    
    for ( int i = 1; i < amount; i++ ) {
        printf("%d ", counter);
        counter += step;
    }
    printf("%d\n", counter);
    
    return 0;
}
