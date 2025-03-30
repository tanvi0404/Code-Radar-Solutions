#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    int arr[N];

    // Input array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is a palindrome
    for (i = 0; i < N / 2; i++) {
        if (arr[i] != arr[N - i - 1]) {
            printf("NO");
            return 0; // Exit early if not a palindrome
        }
    }

    // If loop completes, the array is a palindrome
    printf("YES");

    return 0;
}
