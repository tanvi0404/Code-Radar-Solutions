#include <stdio.h>

int main() {
    int tanvi;
    scanf("%d",&tanvi);
    if (tanvi >=90)
    printf("A");
    else if (tanvi >= 80 && tanvi < 90)
    printf("B");
    else if (tanvi >= 70 && tanvi <80)
    printf("C");
    else if(tanvi >= 60 && tanvi < 70)
    printf("D");
    else 
    printf("F");
    return 0;
}