// Считать с клавиатуры целое положительное число - количество чисел в последовательности.
// Затем считать с клавиатуры заданное количество чисел и вывести наибольшее из них.

#include <stdio.h>

int main() {
    int counter, max, quantity;
    
    scanf("%d %d", &counter, &max);
    
    for ( int i = 1; i < counter; i++ ) {
        scanf("%d", &quantity);
        if ( max < quantity ) {
            max = quantity;
        }
    }
    printf("%d\n", max);
    
    return 0;
}
