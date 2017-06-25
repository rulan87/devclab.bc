// Вывести числовую пирамидку на total строк.
// В первой строке стоит число 1. В последующих строках стоят увеличивающиеся числа через пробел.

#include <stdio.h>

int main() {
    int total;
    int counter = 0;
    
    scanf("%d", &total);
    
    for ( int col = 1; col <= total; col++ ) {
        for ( int row = 1; row < col; row++ ) {
            counter += 1;
            printf("%d ", counter);
        }
        counter +=1;
        printf("%d\n", counter);
    }
    
    return 0;
}
