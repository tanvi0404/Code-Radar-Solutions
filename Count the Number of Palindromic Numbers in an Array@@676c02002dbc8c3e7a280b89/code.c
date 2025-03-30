int ispalindrome(int a){
    int rev=0,temp=a;
    while(a>0){
        rev = rev*10+a%10;
        a=a/10;
    }
    if(rev==temp){
        return 1;
    }
    return 0;
}
int main(){
    int a,i,count=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0,i<a;i++){
        scanf("%d",&arr[i]);
    }
    if(ispalindrome(arr[a])){
        count++;
    }
    printf("%d",count);
    return 0;
}