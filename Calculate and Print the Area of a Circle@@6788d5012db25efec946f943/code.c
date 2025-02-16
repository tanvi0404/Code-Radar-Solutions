#include <stdio.h>

int main() {
    int radius;
    scanf("%f", &radius);
    float a = 3.14*radius*radius;
    printf("Area: %.2f\n", a);
    return 0;
}