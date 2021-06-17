#include <stdio.h>

int main(){
    int inp,res;
    scanf("%d",&inp);
    
    if(inp<100)    res=(inp/10)+(inp%10);
    else{
        if(inp%10==0)    res=(inp/100)+10;
        else    res=10+(inp%10);
    }
    printf("%d",res);
    
    return 0;
}