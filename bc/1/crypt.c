#include <stdio.h>

int main() {
    int plain1, encrypted1, plain2, encrypted2, length, crypt, keeper;
    int keyA, keyB;
    
    scanf("%d %d %d %d %d", &plain1, &encrypted1, &plain2, &encrypted2, &length);
    
    keyA = (encrypted2 - encrypted1) / (plain2 - plain1);
    keyB = encrypted1 - plain1 * keyA;
    
    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &crypt);
        keeper = (crypt - keyB) / keyA;
        printf("%d ", keeper);
    }
    scanf("%d", &crypt);
    keeper = (crypt - keyB) / keyA;
    printf("%d\n", keeper);
    
    return 0;
}
