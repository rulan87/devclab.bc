#include <stdio.h>

int main() {
    int counter, min, quantity;
    
    scanf("%d %d", &counter, &min);
    
    for ( int i = 1; i < counter; i++ ) {
        scanf("%d", &quantity);
        if ( min > quantity ) {
            min = quantity;
        }
    }
    printf("%d\n", min);
    
    return 0;
}
