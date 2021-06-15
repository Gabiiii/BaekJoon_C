#include <stdio.h>

int main(){
    int a,b,c,d,p,x,y;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&p);
    
    x=a*p;
    if(p>c)
        y=b+((p-c)*d);
    else
        y=b;
    
    if(x>y)
        printf("%d",y);
    else
        printf("%d",x);
}