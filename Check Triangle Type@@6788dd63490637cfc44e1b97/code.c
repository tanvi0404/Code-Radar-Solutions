#include <stdio.h>

int main() {
    int tanvi,tanya,shreya;
    scanf("%d %d %d", &tanvi,&tanya,&shreya);
    if (tanvi == tanya && tanya == shreya)
    printf("Equilateral");
    else if (tanvi == shreya || shreya == tanya || tanya == tanvi)
    printf("Isosceles");
    else
    printf("Scalene");
    return 0;
}