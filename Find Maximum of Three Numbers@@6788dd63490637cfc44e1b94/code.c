#include <stdio.h>

int main() {
    int tanvi, shreya, tanya;
    scanf("%d %d %d", &tanvi, &shreya, &tanya);
    if (tanvi > shreya && shreya > tanya)
    printf("%d",tanvi);
    else if (shreya > tanvi && tanvi > tanya)
    printf("%d",shreya);
    else
    printf("%d",tanya);
    return 0;
}