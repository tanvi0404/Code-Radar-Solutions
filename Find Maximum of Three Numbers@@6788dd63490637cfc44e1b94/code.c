#include <stdio.h>

int main() {
    int tanvi, shreya, tanya;
    scanf("%d %d %d", &tanvi, &shreya, &tanya);
    if (tanvi > shreya && shreya > tanya)
    printf("tanvi");
    else if (shreya > tanvi && tanvi > tanya)
    printf("shreya")
    else
    printf("tanya")
    return 0;
}