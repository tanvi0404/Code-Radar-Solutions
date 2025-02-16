#include <stdio.h>
int main(){
    int tanya,a=0;
    scanf("%d",&tanya);
    while(tanya!=0){
        a++;
        tanya = tanya>>1;
    }
    printf("%d",a-1);
    return 0;
}