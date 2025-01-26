#include <stdio.h>

int main() {
    int chole,bhature;
    scanf("%d %d",&chole,&bhature);
    if ((chole >=0 && bhature >= 0)||(chole < 0 && bhature < 0) )
    printf("Same Sign");
    else 
    printf("Different Sign")
    return 0;
}