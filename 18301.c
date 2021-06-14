#include <stdio.h>

void main(){
    int n1,n2,n12,res;
    scanf("%d %d %d",&n1,&n2,&n12);
    res=(n1+1)*(n2+1)/(n12+1)-1;
    printf("%d",res); 
}