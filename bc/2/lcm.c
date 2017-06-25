#include <stdio.h>

int gcd(int a, int b) {
    if ( a % b == 0 ) {
        return b;
    }
    return gcd(b, a%b);
}
int lcm(int first, int second) {
    return first / gcd(first, second) * second;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int first, second;
    
    fscanf(in, "%d%d", &first, &second);
    fclose(in);
    
    fprintf(out, "%d\n", lcm(first, second));
    fclose(out);
    
    return 0;
}
