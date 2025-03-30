#include <stdio.h>
int main(){
    int N,i,largest=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i=i+2){
        if(arr[i]>largest){
            printf("%d",arr[i]);
        }
    }
    printf("-1");
}