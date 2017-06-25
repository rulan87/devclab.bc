// Считать с клавиатуры целое число.
// Вывести на экран количество знакомест, нужных для вывода этого числа.

#include <stdio.h>

int main() {
    
    int numaber;
    int places = 0;
    
    scanf("%d", &numaber);
    
    if ( numaber <= 0 ) {
        places += 1;
        numaber *= -1;
    }
    for ( ; numaber > 0; numaber /= 10 ) {
        places += 1;
    }
    printf("%d\n", places);
    
    return 0;
}
