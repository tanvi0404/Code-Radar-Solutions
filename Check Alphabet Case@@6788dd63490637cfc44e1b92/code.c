#include <stdio.h>

int main() {
    char tanvi;
    scanf("%c", &tanvi);
    if (tanvi >= 'A' && tanvi <= 'Z')
    printf("Uppercase\n");
    else if(tanvi >= 'a' && tanvi <= 'z')
    printf("Lowercase\n");
    else
    printf("Not an alphabet\n");
    return 0;
}