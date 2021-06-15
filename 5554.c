#include <stdio.h>

int main(){
    int inp, sum=0;
    for(int i=0;i<4;i++){
        scanf("%d", &inp);
        sum+=inp;
    }
    printf("%d\n%d", (sum/60),(sum%60));
    return 0;
}