#include <stdio.h>

void main(){
    int cnt,i;
    double dol,dc;
    scanf("%d", &cnt);
    for(i=0;i<cnt;i++){
        scanf("%lf", &dol);
        dc=dol*0.8;
        printf("$%.2lf\n",dc);
    }
}