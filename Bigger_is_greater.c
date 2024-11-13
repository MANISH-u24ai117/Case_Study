#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Function to reverse a portion of a string
void reverse(char *str, int start, int end) {
    while (start < end) {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
}

// Function to find the next lexicographical permutation
int next_permutation(char *w) {
    int len = strlen(w);
    int i = len - 2;
    
    // Step 1: Find the rightmost character which is smaller than its next character
    while (i >= 0 && w[i] >= w[i + 1]) {
        i--;
    }
    
    // If there is no such character, it's already the highest permutation
    if (i < 0) return 0;
    
    // Step 2: Find the smallest character on the right of 'i' and greater than w[i]
    int j = len - 1;
    while (w[j] <= w[i]) {
        j--;
    }
    
    // Step 3: Swap characters at i and j
    swap(&w[i], &w[j]);
    
    // Step 4: Reverse the sequence after the position i
    reverse(w, i + 1, len - 1);
    
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char w[101];
        scanf("%s", w);
        
        if (next_permutation(w)) {
            printf("%s\n", w);
        } else {
            printf("no answer\n");
        }
    }
    return 0;
}
