// 15552 ºü¸¥ A+B
#include <stdio.h>
void main() {
	int input, a, b, i;
	scanf("%d", &input);
	for(i = 0; i < input; i++){
		scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
	}
}