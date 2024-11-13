#include <stdio.h>

int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);
    
    long long total_candies = 0;
    
    for (long long i = 0; i < M; i++) {
        long long a, b, k;
        scanf("%lld %lld %lld", &a, &b, &k);
        total_candies += (b - a + 1) * k;  // Adding k candies for each jar in the range [a, b]
    }
    
    // Calculating the average number of candies per jar and rounding down
    printf("%lld\n", total_candies / N);
    
    return 0;
}
