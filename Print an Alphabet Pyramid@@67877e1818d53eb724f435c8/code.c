#include <stdio.h>
int main(){
    int n;
    char a;
    scanf("%d %c",&n,&a);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}