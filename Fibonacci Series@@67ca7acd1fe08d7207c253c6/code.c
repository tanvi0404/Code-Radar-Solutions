#include <stdio.h>
void fibonacciseries(int n) {
    int a = 0, b = 1;
    if (n == 1) {
        printf("%d", a);
        return;
    }
    printf("%d %d", a, b);
    for (int i = 3; i <= n; i++) {
        int next_term = a + b;
        printf(" %d", next_term);
        a = b;
        b = next_term;
    }
    printf("\n");
}