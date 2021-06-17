#include <stdio.h>

int main(){
    float a;
    scanf("%f", &a);
    printf("%.f %.f", (a-(a*0.22)),(a-(a*0.2*0.22)));
    return 0;
}