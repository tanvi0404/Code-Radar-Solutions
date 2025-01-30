#include <stdio.h>

int main() {
    int pani,puri;
    scanf("%d %d",&pani,&puri);
    if(pani &(1<<puri))
    printf("1");
    else
    printf("0");
    return 0;
}