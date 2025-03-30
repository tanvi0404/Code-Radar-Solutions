#include <stdio.h>
int main() {
    int N, i, max = 0;
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < N - 1; i++) {
        int product = arr[i] * arr[i + 1];
        if (product > max) {
            max = product;
        }
    }
    printf("%d", max);
    return 0;
}
