// В файле task.in дана строка длиной не более 100 символов и не содержащая whitespace-символов (пробелов и прочего).
// Прочитать строку в память и подсчитать ее длину.
// Результат вывести в task.out.

// Пример ввода
// hello
// Пример вывода
// 5

#include <stdio.h>

#define SIZE 100

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != 0; len++ );
    return len;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char string[SIZE];
    
    fscanf(in, "%s", string);
    fclose(in);
    fprintf(out, "%d\n", strLen(string));
    fclose(out);
    
    return 0;
}
