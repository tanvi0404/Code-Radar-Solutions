#include <stdio.h>
int main() {
    int N,i,sorted = 1;
    scanf("%d", &N);
    int arr[N];
     for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
     for (i = 0; i < N-1 ; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0; 
            break;
        }
    }
     if (sorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
    return 0;
}