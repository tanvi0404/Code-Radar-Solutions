int main(){
    int i,N,found=0,key;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
    scanf("%d",&arr[i]);
}scanf("%d",&key);
for(i=0;i<N;i++){
    if(arr[i]==key){
        found = 1;
        printf("%d",arr[i]);
    }
 }
 if(!found){
    printf("-1");
 }
 return 0;
}
