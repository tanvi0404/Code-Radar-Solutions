#include <stdio.h>

int main() {
    int pani,puri;
    scanf("%d %d",&pani,&puri);
    printf("%u",pani &(1<<puri));
    return 0;
}