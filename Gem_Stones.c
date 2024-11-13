#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    // Array to keep track of presence of each letter in all rocks
    int gem_count[26] = {0};

    for (int i = 0; i < N; i++) {
        char rock[101];
        int unique[26] = {0};  // Track unique elements in the current rock

        scanf("%s", rock);

        // Mark characters that appear in this rock
        for (int j = 0; rock[j] != '\0'; j++) {
            unique[rock[j] - 'a'] = 1;
        }

        // Update gem_count only if element is present in this rock
        for (int k = 0; k < 26; k++) {
            gem_count[k] += unique[k];
        }
    }

    // Count gem-elements
    int gem_elements = 0;
    for (int i = 0; i < 26; i++) {
        if (gem_count[i] == N) {  // If element appears in all rocks
            gem_elements++;
        }
    }

    printf("%d\n", gem_elements);
    return 0;
}
