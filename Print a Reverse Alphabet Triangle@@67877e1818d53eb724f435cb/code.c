#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=a;i>=1;i--){
        char ch='A';
        for(j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}