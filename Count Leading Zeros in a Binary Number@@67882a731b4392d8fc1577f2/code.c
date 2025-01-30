#include <stdio.h>

int main() {
    int tanvi;
    scanf("%d",&tanvi);
    int count = 0;
    while((tanvi&1)==0){
        tanvi=tanvi>>31;
        count++;
    }
    printf("%d",count);
    return 0;
}