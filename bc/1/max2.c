#include <stdio.h>

int main() {
    int a;
    int b;
    
    scanf("%d%d", &a, &b);

    if ( a < b ) {
        printf("%d\n", b);
    } else {
        printf("%d\n", a);
    }
    return 0;
}


//Считать с клавиатуры два целых числа и вывести большее из них.
//Если числа равны, вывести любое.
