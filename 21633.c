#include <stdio.h>

int main(){
    double input, res=0;
    scanf("%lf", &input);
    
    res=(input*0.01)+25;
    if(res<100) res=100;
    else if(res>2000)   res=2000;
    
    printf("%.2lf", res);
    return 0;
}