#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int sp=1;sp<=N-i;sp++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("%d ",j);

            printf("\n");
    }
    return 0;
}