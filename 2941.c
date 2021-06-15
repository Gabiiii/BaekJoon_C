#include <stdio.h>
#include <string.h>

int main(){
    int i, cnt;
    char inp[100]={};
    scanf("%s", inp);

    cnt=strlen(inp);

    for(i=0;i<strlen(inp);i++){
        if(inp[i]=='='){
            if(inp[i-2]=='d'&&inp[i-1]=='z')   cnt=cnt-2;
            else if(inp[i-1]=='c'||inp[i-1]=='s'||inp[i-1]=='z') cnt=cnt-1;            
        }
        else if(inp[i]=='-'){
            if(inp[i-1]=='c'||inp[i-1]=='d')    cnt=cnt-1;
        }
        else if(inp[i]=='j'){
            if(inp[i-1]=='l'||inp[i-1]=='n')    cnt=cnt-1;
        }
    } 
    printf("%d", cnt);
    
    return 0;
}