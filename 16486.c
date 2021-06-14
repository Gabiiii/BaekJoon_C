#include <stdio.h>

void main(){
    int d1;
    double d2,res=0;
    scanf("%d %lf", &d1,&d2);
    res=2*d1;
    res+=2*d2*3.141592;
    printf("%lf", res);
}