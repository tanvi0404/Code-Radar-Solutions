#include <stdio.h>
int main(){
    int N;
    scanf("%d",N);
    for(i=1;i<=N;i++){
        for(sp=1;sp<=N-i;sp++)
            printf(" ");
        for(j=1;j<=2i-1;j++)
            printf("*");
            printf("\n");
    }
}