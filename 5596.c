#include <stdio.h>

void main(){
    int scos[4],scot[4],s=0,t=0;
    for(int i=0;i<4;i++){
        scanf("%d",&scos[i]);
        s+=scos[i];
    }
    for(int i=0;i<4;i++){
        scanf("%d",&scot[i]);
        t+=scot[i];
    }
    if(s>=t)    printf("%d",s);
    else    printf("%d",t);
}