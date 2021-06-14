#include <stdio.h>

void main(){
    int k,n,m,res;
    scanf("%d %d %d", &k,&n,&m);
    res=(k*n)-m;
    if(res>0)   printf("%d", res);
    else    printf("0");
}