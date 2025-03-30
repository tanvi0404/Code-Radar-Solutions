#include <stdio.h>
int main(){
    int i,N,counteven=0,countodd=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]%2==0){
            counteven++;
        }
        else{
            countodd++;
        }
    }
    printf("%d %d",counteven,countodd);
    return 0;
}