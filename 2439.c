// 2439 º°Âï±â-2
#include <stdio.h>
void main(){
	int input, i, j;
	scanf("%d", &input);
	for(i = 1; i <= input; i++){
		for (j = 1; j <= (input-i); j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}