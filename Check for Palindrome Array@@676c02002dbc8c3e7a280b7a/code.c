#include <stdio.h>
int main(){
    int N,i,temp;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N/2;i++){
        temp = arr[i];
        arr[i]=arr[N-i-1];
        arr[N-i-1]=temp;
    }
    if(temp==arr[N]){
        printf("YES");
    }
    else{
        printf("NO");
    }
}