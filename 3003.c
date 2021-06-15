#include <stdio.h>

int main(){
    int ch[6]={1,1,2,2,2,8};
    int inp[6];

    for(int i=0;i<6;i++)
        scanf("%d", &inp[i]);

    for(int i=0;i<6;i++)
        printf("%d ", (ch[i]-inp[i]));
    
    return 0;
}