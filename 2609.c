#include <stdio.h>

int gcd(int a, int b){
	if(b == 0)
		return a;
	else
		return (gcd(b, a%b));
}

int main(){
	int num1, num2, g, l;
	scanf("%d %d", &num1, &num2);
	g = gcd(num1, num2);
	l = num1 * num2 / g;
	printf("%d\n%d", g, l);
    return 0;
}