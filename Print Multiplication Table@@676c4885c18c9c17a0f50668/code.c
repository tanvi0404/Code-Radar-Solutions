#include <stdio.h>

int main() {
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        printf("%d X %d = %d",N,i,N*i);
    }
    return 0;
}