#include <stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    scanf("%d",&arr[i]);
    for(i=0;i<N-1;i++){
        if(arr[i]>arr[i+1]){
            printf("Not Sorted");
            break;
        }}
            printf("Sorted");

    return 0;
}