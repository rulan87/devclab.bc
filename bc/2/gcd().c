// Написать функцию, которая находит наибольший общий делитель.
// int gcd(int a, int b)

// Передаваемые значения больше нуля.

int gcd(int a, int b) {
    int divider;
    
    for ( int i = 2; i < a && i < b; i++ ) {
        if ( a % i == 0 && b % i == 0 ) {
            divider = i;
        }
        return divider;
    }
    return 1;
}
