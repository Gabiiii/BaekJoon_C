#include <stdio.h>

int main(){
    int ho,mi,se,ti;
    scanf("%d %d %d", &ho,&mi,&se);
    scanf("%d", &ti);

    se=se+ti;
    mi=mi+(se/60);
    ho=ho+(mi/60);
    
    printf("%d %d %d", (ho%24),(mi%60),(se%60));
    return 0;
}