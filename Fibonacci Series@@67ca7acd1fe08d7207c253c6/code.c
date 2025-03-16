#include <stdio.h>

// Function to generate and print the Fibonacci series
void fibonacciseries(int n) {
    int a = 0, b = 1; // The first two terms of the Fibonacci sequence
    
    // Special case when n is 1
    if (n == 1) {
        printf("%d", a);
        return;
    }
    
    // Print the first two terms
    printf("%d %d", a, b);
    
    // Calculate and print the remaining terms
    for (int i = 3; i <= n; i++) {
        int next_term = a + b;
        printf(" %d", next_term);
        a = b;
        b = next_term;
    }
    printf("\n");
}