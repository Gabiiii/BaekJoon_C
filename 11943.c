#include <stdio.h>

int main(){
    int a,b,c,d,sol;
    scanf("%d %d", &a,&b);
    scanf("%d %d", &c,&d);
    sol=(a+d)<(b+c)?(a+d):(b+c);
    printf("%d",sol);
    return 0;
}