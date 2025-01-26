#include <stdio.h>

int main() {
    char tanvi;
    scanf("%c", &tanvi);
    if (tanvi >= 'A' && tanvi <= 'Z')
    printf("Uppercase");
    else if(tanvi >= 'a' && tanvi <= 'z')
    printf("Lowercase");
    else
    printf("Not an alphabet");
    return 0;
}