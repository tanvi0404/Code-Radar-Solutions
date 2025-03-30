#include <stdio.h>
int main(){
    int N,i,largest=0,found=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i=i+2){
        if(arr[i]>largest){
            largest = arr[i];
            found = 1;
        }
    }
    if(found){
        printf("%d",largest);
    }
    else{
    printf("-1");}
}