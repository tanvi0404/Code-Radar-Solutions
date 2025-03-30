#include <stdio.h>
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1;
}
int main() {
    int N, i, count = 0;
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < N; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
