#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i = N;i>=1;i--){
        for(char a = 'A'+i;a>=i;a++){
            printf("%c ",a);
        }
    printf("\n");}
}