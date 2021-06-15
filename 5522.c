#include <stdio.h>

int main(){
    int inp, sum=0;
    for(int i=0;i<5;i++){
        scanf("%d", &inp);
        sum+=inp;
    }
    printf("%d", sum);
    return 0;
}