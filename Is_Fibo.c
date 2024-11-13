#include <stdio.h>
#include <math.h>

// Function to check if a number is a perfect square
int isPerfectSquare(long long x) {
    long long s = (long long)sqrt(x);
    return (s * s == x);
}

// Function to check if a number is in the Fibonacci sequence
int isFibonacci(long long N) {
    return isPerfectSquare(5 * N * N + 4) || isPerfectSquare(5 * N * N - 4);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N;
        scanf("%lld", &N);

        if (isFibonacci(N)) {
            printf("IsFibo\n");
        } else {
            printf("IsNotFibo\n");
        }
    }

    return 0;
}
