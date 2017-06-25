#include <stdio.h>

int main() {
    int current, base;
    int level = 1;
    int times;
    
    scanf("%d %d", &current, &base);
    
    if ( base == 10 ) {
        printf("%d", current);
    }
    if ( current < 0 ) {
        printf("-");
    }
    
    
    return 0;
}
