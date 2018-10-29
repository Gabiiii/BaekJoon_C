// 2441 º°Âï±â-4
#include <stdio.h>
void main(){
	int input, i, j;
	scanf("%d", &input);
	for(i = 0; i < input; i++){
		for(j = 0; j < i; j++)
			printf(" ");
		for(j = 1; j <= (input-i); j++)
			printf("*");
		printf("\n");
	}
}