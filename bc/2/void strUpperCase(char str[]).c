void strUpperCase(char str[]) {
    for ( int index = 0; str[index] > 0; index++ ) {
        if ( str[index] >= 'a' ) {
            str[index] += 'A' - 'a' ;
        }
    }
}



#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( char symbol; fscanf(in, "%c", &symbol) != EOF; ) {
        if ( symbol >= 97 && symbol <= 122 ) {
            symbol -= 32;
        }
        fprintf(out, "%c", symbol);
    }
    fprintf(out, "\n");
    
    fclose(in);
    fclose(out);
    
    return 0;
}

