#include <stdio.h>

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 != 0 ) {
        min -= 1;
    }
    for ( int i = min; i < max; i += 2 ) {
        min = i * i;
        printf("%d ", min);
    }
    
    return 0;
}
