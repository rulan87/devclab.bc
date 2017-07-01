// Считать с клавиатуры 2 целых положительных числа, количество забитых голов хозяевами и гостями на футбольном матче. Вывести на экран результат матча «Home team wins», «Away team wins», «Draw»

#include <stdio.h>

int main() {
    int home, away;
    
    scanf("%d %d", &away, &home);
    
    if ( away < home ) {
        printf("Home team wins\n");
    } else if ( away > home ) {
        printf("Away team wins\n");
    } else if ( away == home ) {
        printf("Draw\n");
    }
    
    return 0;
}
