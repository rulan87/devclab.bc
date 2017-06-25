#include <stdio.h>

int main() {
    int number;
    int flag = 1;
    
    scanf("%d", &number);
    
    if ( number % 2 == 0 ) {
        flag = 0;
    } 
    return 0;
}
