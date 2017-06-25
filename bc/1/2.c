#include <stdio.h>

int main() {
    int a;
    int b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d<%d is %d\n", a, b, a<b);
    printf("%d>%d is %d\n", a, b, a>b);
    printf("%d=%d is %d\n", a, b, a<=b);
    printf("%d>=%d is %d\n", a, b, a>=b);
    printf("%d<=%d is %d\n", a, b, a==b);
    printf("%d!=%d is %d\n", a, b, a!=b);
    return 0;
}

// Пример ввода
// 1 2
// Пример вывода
// 1<2 is 1
// 1>2 is 0
// 1<=2 is 1
// 1>=2 is 0
// 1==2 is 0
// 1!=2 is 1