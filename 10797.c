#include <stdio.h>

void main(){
    int chk,i,cnt=0;
    int car[5];
    scanf("%d", &chk);
    for(i=0;i<5;i++)    scanf("%d", &car[i]);
    for(i=0;i<5;i++){
        if(car[i]==chk) cnt++;
    }
    printf("%d", cnt);
}