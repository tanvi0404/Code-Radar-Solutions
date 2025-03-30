#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int N, i, largest = INT_MIN, found = 0;
    scanf("%d", &N);

    if (N <= 0) { // Validate the size of the array
        printf("-1");
        return 0;
    }

    int arr[N]; // Ensure your compiler supports VLAs
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N; i = i + 2) {
        if (arr[i] > largest) {
            largest = arr[i];
            found = 1;
        }
    }

    if (found) {
        printf("%d", largest);
    } else {
        printf("-1");
    }

    return 0;
}