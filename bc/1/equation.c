// Считать с клавиатуры целое число - дискриминант квадратного уравнения. 
// Вывести на экран число разных корней этого уравнения.

#include <stdio.h>

int main() {
    int d;
    
    scanf("%d", &d);
    
    if ( d > 0 ) {
        printf("2\n"); 
    } else if ( d == 0 ) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}