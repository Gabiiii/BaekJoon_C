#include <stdio.h>

int main(){
    int pac,res=1;
    scanf("%d",&pac);
    if(pac==0)
      printf("1");
    else{
        for(int i=1;i<pac+1;i++)
            res=res*i;
        printf("%d",res);
    }
    return 0;
}