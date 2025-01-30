#include <stdio.h>

int main() {
    int pani,puri;
    scanf("%d %d",&pani,&puri);
    printf(pani &(1<<pani-1));
    return 0;
}