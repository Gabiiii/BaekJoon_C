#include <stdio.h>

void main(){
    int l,a,b,c,d,kor,math;
    scanf("%d %d %d %d %d", &l,&a,&b,&c,&d);

    if(a%c==0)  kor=a/c;
    else    kor=(a/c)+1;

    if(b%d==0)  math=b/d;
    else    math=(b/d)+1;

    if(kor>math)    printf("%d", (l-kor));
    else    printf("%d", (l-math));
}