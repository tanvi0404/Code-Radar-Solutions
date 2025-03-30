#include <stdio.h>
int main() {
    int N, i;
    scanf("%d", &N); 
    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int increasing = 1, decreasing = 1;
    for (i = 1; i < N; i++) {
        if (arr[i] > arr[i - 1]) {
            decreasing = 0;  
        }
        if (arr[i] < arr[i - 1]) {
            increasing = 0;
        }
    }
    if (increasing || decreasing) {
        printf("YES\n"); 
    } else {
        printf("NO\n");  
    }
    return 0;
}