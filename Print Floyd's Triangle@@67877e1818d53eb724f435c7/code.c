#include <stdio.h>
int main(){
    int n,a;
    scanf("%d %d",&n,&a);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}