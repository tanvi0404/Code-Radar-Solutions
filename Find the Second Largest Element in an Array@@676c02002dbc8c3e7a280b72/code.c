#include <stdio.h>
int main(){
    int i,N,max=0,secondmax=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[N]);
    }
    for(i=0;i<N;i++){
        if(arr[i]>max){
        max=arr[i];
        }}
    for(i=0;i<N;i++){
        if((arr[i]>secondmax)&&(secondmax<max)){
            arr[i]=secondmax;
        }
    }
    printf("%d",secondmax);
    
}