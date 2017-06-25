#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int d;
    int max;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    if ( a < b ) {
        max = b;
    } if ( a < c) {
        max = c;
    } if ( a < d ) {
        max = d;
    } else max = a;
        printf ("%d\n", max);
    
    

    return 0;
}
