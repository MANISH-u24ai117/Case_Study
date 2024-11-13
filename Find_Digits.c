#include <stdio.h>

int find_digits(int N) {
    int count = 0;
    int original = N;
    
    while (N > 0) {
        int digit = N % 10;
        if (digit != 0 && original % digit == 0) {  // Check if digit divides the original number
            count++;
        }
        N /= 10;  // Move to the next digit
    }
    
    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        printf("%d\n", find_digits(N));
    }
    
    return 0;
}
