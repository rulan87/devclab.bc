// Написать функцию:
// int isPrime(int n)
// Проверить, является ли данное число простым.

int isPrime(int n) {
    for ( int i = 1; i < n; i++ ) {
        if ( n % i == 0 ) {
            return 1;
        }
    }
    return 0;
}

