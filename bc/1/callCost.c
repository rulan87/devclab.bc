// Считать с клавиатуры 2 целых числа - номер телефона и количество минут.
// Стоимость минуты разговора составляет 1$ за звонок на городской номер и 40$ за звонок на короткий номер. За звонок по номерам специальных служб плата не взимается. В случае неопределенности вывести -1.

// Коротким номером считается любой трехзначный номер.
// Городским номером считается любой семизначный номер.
// Номера телефонов не могут начинаться с ноля.
// Номера спецслужб: 101, 102, 103, 104, 112.

#include <stdio.h>

int main() {
    int p;
    int min;
    
    scanf("%d%d", &p, &min);
    
    if ( p >= 1000000 && p <= 9999999 ) {
        printf("%d$\n", min);
    } else if ( p >= 100 && p <= 999 && p != 101 && p != 102 && p != 103 && p != 104 && p != 112 ) {
        printf("%d$\n", min*40);
    } else if ( p == 101 || p == 102 || p == 103 || p == 104 || p == 112 ) {
        printf("0$\n");
    } else {
        printf("-1\n");
    }
    return 0;
}