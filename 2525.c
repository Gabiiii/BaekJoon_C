#include <stdio.h>

int main(){
    int ho,mi,ti;
    scanf("%d %d", &ho,&mi);
    scanf("%d", &ti);
    mi=mi+ti;
    ho=(ho+(mi/60))%24;
    mi=mi%60;

    printf("%d %d", ho,mi);
    return 0;
}