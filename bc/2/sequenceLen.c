#include <stdio.h>

#define SIZE 100

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[SIZE];
    int len;
    
    for ( len = 0; len < SIZE && fscanf(in, "%d", &array[len]) == 1; len++ );
    
    fprintf(out, "%d\n", len);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
