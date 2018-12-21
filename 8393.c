// 8393 гу
#include <stdio.h>
void main(){
	int input, i, sum = 0;
	scanf("%d", &input);
	for(i = 1; i <= input; i++)
		sum += i;
	printf("%d", sum);
}
