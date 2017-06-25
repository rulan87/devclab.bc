#include <stdio.h>

int main() {
    int min, max, even;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 == 0 ) {
        min += 1;
    }
    if ( max % 2 == 0 ) {
        max = max - max % 2;
    }
    for ( int i = min; i < max; i += 2 ) {
        even = i * i * i;
        printf("%d ", even);
    }
    max *= max * max;
    printf("%d\n", max);
    
    return 0;
}
