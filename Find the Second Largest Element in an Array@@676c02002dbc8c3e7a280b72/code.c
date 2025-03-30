#include <stdio.h>
int main(){
    int i,N,max=0,secondmax=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }if(N>2){
    for(i=0;i<N;i++){
        if(arr[i]>max){
        max=arr[i];
        }}
    for(i=0;i<N;i++){
        if((arr[i]>secondmax)&&(arr[i]<max)){
            secondmax= arr[i];
        }
    }
    printf("%d",secondmax);}
    else{
        printf("-1");
    }
}

