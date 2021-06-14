#include <stdio.h>

void main(){
    int song,avg,used;
    scanf("%d %d", &song,&avg);
    used=(song*(avg-1))+1;
    printf("%d",used);
}