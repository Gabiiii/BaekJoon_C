#include <stdio.h>

int main(){
    int mon,day,res;
    scanf("%d %d",&mon,&day);
    res=(mon*100)+day;
    
    if(res==218)
        printf("Special");
    else if(res>218)
        printf("After");
    else
        printf("Before");
    
    return 0;
}