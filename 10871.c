// 10871 X보다 작은 수
#include <stdio.h>
void main() {
	int i, count, num;
	int inArr[10000];
	scanf("%d %d", &count, &num);
	
	for (i = 0; i < count; i++){
		scanf("%d", &inArr[i]);
		if(inArr[i] < num)
			printf("%d ", inArr[i]);
	}
}
