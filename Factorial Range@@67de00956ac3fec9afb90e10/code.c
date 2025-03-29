int fact(int a){
    if(a==0||a==1){
        return 1;
    }
    if(a<0){
        a = -a;
    }
    return a*fact(a-1);
}
void factorialRange(int start, int end){
    if(start<0||end<0||start>end){
        printf("Invalid range");
        return ;
    }
    for(int i=start;i<=end;i++){
        printf("%d\n",fact(i));
    }
}