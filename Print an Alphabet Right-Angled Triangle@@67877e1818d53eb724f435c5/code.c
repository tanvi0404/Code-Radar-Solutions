#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(char a = 'A';a<'A'+1;a++){
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}