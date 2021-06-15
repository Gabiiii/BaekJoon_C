#include <stdio.h>

int main(){
    int m,n,num;
    scanf("%d %d %d", &m,&n,&num);
    printf("%d %d", (num/n),(num%n));
    return 0;
}