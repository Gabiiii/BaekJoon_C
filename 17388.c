#include <stdio.h>

void main(){
    int s,k,h;
    scanf("%d %d %d", &s,&k,&h);
    if(s+k+h<100){
        if(s<=k && s<=h)    printf("Soongsil");
        else if(k<=s && k<=h)   printf("Korea");
        else    printf("Hanyang");
    }
    else    printf("OK");
}