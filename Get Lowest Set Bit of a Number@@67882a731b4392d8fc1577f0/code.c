#include <stdio.h>

int main() {
    int tanvi,count=0;
    scanf("%d",&tanvi);
    while((tanvi&1)==0)
   {tanvi=tanvi>>1;
    count++;
}
printf("%d",count);
return 0;
}