#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, res, i;
	int arr[10] = {0,};
	scanf("%d %d %d", &a, &b, &c);
	res = a * b * c;
	
	while(res != 0) {
		arr[res % 10]++;
		res = res/10; 
	}
	
	for(i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	
	return 0;
}