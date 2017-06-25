//car.c
//Считать с клавиатуры 2 целых положительных числа - скорость движения автомобиля и ограничение по скорости. Проверить, нарушает ли водитель автомобиля правило ограничения скорости. Если нарушает, вывести в консоль "violation", если не нарушает — вывести «ok».

#include <stdio.h>

int main() {
    int speed, limit;
    
    scanf("%d%d", &speed, &limit);
    
    if ( speed > limit ) {
        printf("violation\n");
    } else {
        printf("ok\n");
    }
    
    return 0;
}
