#include <stdio.h>
#include <string.h>

int main(){
    int pnt, res, cnt, tmp;
    scanf("%d", &cnt);
    tmp=cnt;

    for(int c=0;c<tmp;c++){
        pnt=-1;
        res=0;
        char inp[100]={};
        char chk[10]={};
        scanf("%s", inp);

        chk[++pnt]=inp[0];
        for(int i=1;i<strlen(inp);i++){
            if(inp[i]!=chk[pnt])    chk[++pnt]=inp[i];
            else    continue;
        }

        while(pnt>0){
            for(int i=0;i<pnt;i++){
                if(chk[pnt]==chk[i]){
                    res=-1;
                    pnt=0;
                }
            }
            pnt--;
        }
        cnt+=res;
    }
    printf("%d",cnt);
    return 0;
}