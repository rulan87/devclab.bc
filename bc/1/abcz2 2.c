#include <stdio.h>

int main() {
    int number;
    int flag = 0;
    
    scanf("%d", &number);
    
    if ( number % 2 == 0 ) {
        flag = 1;
    } else if ( flag == 1 ) {
        printf("alhpa\n");
    }
    if ( number % 3 == 0 ) {
        flag = 1;
    } else if ( flag == 1 ) {
        printf("bravo\n");
    }
    if ( number % 5 == 0 ) {
        flag = 1;
    } else if ( flag == 1 ) {
        printf("charley\n");
    } else if ( flag == 0 ) {
        printf("zulu\n");
    }
    
    return 0;
}
