#include <stdio.h>

int main() {
    int pani,puri;
    scanf("%d %d",&pani,&puri);
    printf("%u",puri &(1<<pani));
    return 0;
}