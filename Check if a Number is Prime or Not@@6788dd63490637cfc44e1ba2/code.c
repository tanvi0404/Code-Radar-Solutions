#include <stdio.h>

int main() {
    int tanya ;
    scanf("%d",&tanya);
    if (tanya%1 == 0 && tanya%tanya == 0)
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}