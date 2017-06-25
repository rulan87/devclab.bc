// Считать два числа из файла task.in.
// Записать их сумму в файл task.out.

#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int a, b;
    
    fscanf(in, "%d %d", &a, &b;
    fprintf(out, "%d ", a+b);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
