#include <stdio.h>

int main(){
    int scoa[4],scob[2],mina=100,minb=100,sum=0;
    int i;
    for(i=0;i<4;i++){
        scanf("%d", &scoa[i]);
        sum+=scoa[i];
        if(mina>scoa[i]) mina=scoa[i];
    }    
    for(i=0;i<2;i++){
        scanf("%d",&scob[i]);
        sum+=scob[i];
        if(minb>scob[i])    minb=scob[i];
    }
    sum=sum-mina-minb;
    printf("%d",sum);
    return 0;
}