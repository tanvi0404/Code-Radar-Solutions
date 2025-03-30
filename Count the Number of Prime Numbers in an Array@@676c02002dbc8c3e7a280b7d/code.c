#include <stdio.h>
int main(){
    int N,i,count=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=2;i*i<N;i++){
        if(N%i==0){
            return 0;
        else
        count++;
        }
    }
    printf("%d",count);

    return 0;
}