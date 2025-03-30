#include <stdio.h>

int main() {
    int N, i, largest, found = 0;
    
    scanf("%d", &N);
    
    if (N == 0) {
        printf("-1");
        return 0;  // If no elements, directly return -1.
    }
    
    int arr[N];
    
    // Input array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize 'largest' to the first element
    largest = arr[0];
    
    // Find the largest element at even indices (0, 2, 4, ...)
    for (i = 0; i < N; i = i + 2) {
        if (arr[i] > largest) {
            largest = arr[i];
            found = 1;  // Mark that a valid element was found at even indices
        }
    }

    // If no valid element was found, print -1
    if (found) {
        printf("%d", largest);  // Print the largest element
    } else {
        printf("-1");  // No valid element found at even indices
    }

    return 0;
}
