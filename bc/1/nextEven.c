#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    if ( a % 2 != 0 ) {
        printf("%d\n", a + 1 );
    } else {
        printf("%d\n", a);
    }
    
    return 0;
}


//Считать целое число. Вывести на экран минимальное четное число, не меньшее введенного.