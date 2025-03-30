#include <stdio.h>
int main(){
    int N,i,key,count=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
    scanf("%d",&arr[i]);
}
scanf("%d",&key);
for(i=0;i<N;i++){
    if(arr[i]>key){
        count++;
    }
}
printf("%d",count);
return 0;
}