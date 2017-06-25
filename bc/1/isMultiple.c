// Считать с клавиатуры два целых числа, причем второе из них не равно нулю. 
// Если первое кратно второму, вывести на экран yes, иначе вывести no.

#include <stdio.h>

int main() {
    int first;
    int second;
    
    scanf("%d%d", &first, &second);
    if ( second != 0 && first % second == 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
