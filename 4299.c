#include <stdio.h>

void main(){
    int a,b,x,y;
    scanf("%d %d", &a,&b);
    if(a>b){
        x=(a+b)/2;
        y=(a-b)/2;
    }
    else{
        x=(b+a)/2;
        y=(b-a)/2;
    }

    if((x+y==a)&&(x-y==b))  printf("%d %d", x,y);
    else    printf("-1");
}