#include <stdio.h>

void main(){
    int n,w,h,l,res;
    scanf("%d %d %d %d", &n,&w,&h,&l);
    res=(w/l)*(h/l);
    if(res>n)   printf("%d", n);
    else    printf("%d", res);
}