// Считать с клавиатуры положительную длину числовой последовательности и саму последовательность. 
// Проверить, упорядочена ли последовательность по неубыванию. 
// Если упорядочена вывести на экран «yes», в противном случае вывести «no».

#include <stdio.h>

int main() {
    int lenth, sequence, min;
    
    scanf("%d %d", &lenth, &min);
    
    for ( int i = 1; i < lenth; i++ ) {
        scanf("%d", &sequence);
        if (sequence < min ) {
            printf("no\n");
            return 0;
        } else {
            min = sequence;
        }
    }
    printf("yes\n");
    
    return 0;
}
