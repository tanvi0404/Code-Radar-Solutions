#include <stdio.h>

int main() {
    int tanvi;
    scanf("%d",&tanvi);
    if (tanvi & 1<<31)
    printf("Set");
    else
    printf("Not Set");
    return 0;
}