#include <stdio.h>

int main() {
    int n, m;
    
    scanf("%d %d", &n, &m);
    
    if ( n && m ) {
        printf("n AND m is %d\n", n);
    } else if ( n || m ) {
        printf("n OR m\n", m);
    }
    
    return 0;
}
