int main(){
    int N,i,max=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]*arr[i-1]>max){
            max = arr[i]*arr[i-1];
        }
        else if((arr[i]*arr[i+1]>max)){
            max = arr[i]*arr[i+1];
        }
    }
    printf("%d",max);
}