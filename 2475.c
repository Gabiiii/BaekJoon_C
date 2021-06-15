#include <stdio.h>

int main(){
    int inp[6], chk=0;
    for(int i=0;i<5;i++){
        scanf("%d", &inp[i]);
    }
    for(int i=0;i<5;i++){
        chk+=(inp[i]*inp[i]);
    }
    chk=chk%10;
    printf("%d", chk);

    return 0;
}