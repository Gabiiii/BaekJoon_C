// 11720 숫자의 합
#include <stdio.h>
void main() {
	int input, i, sum = 0;
	char inArr[101] = {};
	scanf("%d", &input);
	scanf("%s", inArr);
	
	for(i = 0; i < input; i++)
		sum += inArr[i] - 48;
	printf("%d", sum);
}