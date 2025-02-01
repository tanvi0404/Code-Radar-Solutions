#include <stdio.h>

int main() {
    int chole,bhature;
    scanf("%d %d",&chole,&bhature);
    chole = chole^bhature;
    bhature = bhature^chole;
    chole = chole^bhature;
    printf("%d %d",chole,bhature);
    return 0;
}