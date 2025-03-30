#include <stdio.h>
int main(){
    int N,i,total=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i,N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        total = total+arr[i];
    }
    printf("%d ",total);
}