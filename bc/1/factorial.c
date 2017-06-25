// Вычислить и вывести факториал считанного с клавиатуры целого числа.
// В случае неопределенности ответа вывести -1.
// Для решения пользоваться циклами.

#include <stdio.h>

int main() {
    int factorial;
    int result = 1;
    
    scanf("%d", &factorial);
    
    for ( int i = 1; i <= factorial; i++ ) {
        result *= i;
    }
    if ( factorial < 0 ) {
        printf("-1\n");
    } else {
        printf("%d\n", result);
    }
    
    return 0;
}

