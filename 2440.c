// 2440 º°Âï±â-3
#include <stdio.h>
void main(){
	int input, i, j;
	scanf("%d", &input);
	for(i = 0; i < input; i++){
		for(j = 1; j <= (input-i); j++)
			printf("*");
		printf("\n");
	}
}