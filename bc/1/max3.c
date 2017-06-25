#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    
    scanf("%d%d%d", &a, &b, &c);
    
    if ( a > b && a > c ) {
        printf("%d\n", a);
    } else if ( b > a && b > c ) {
        printf("%d\n", b);
    } else if ( c > a && c > b ) {
        printf("%d\n", c);
    } else {
        printf("%d\n", a);
    }
    return 0;
}




//Считать с клавиатуры три целых числа и вывести большее из них.
//В случае равенства выводить любое.
//Данная задача решается без массивов, циклов и функций.