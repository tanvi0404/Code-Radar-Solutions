#include <stdio.h>

int main() {
    int pani,puri;
    scanf("%d %d",&pani,&puri);
    printf("%d",pani^(1>>puri));
    return 0;
}