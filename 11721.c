// 11721 �� ���� ���� ����ϱ�
#include <stdio.h>
#include <string.h>
void main() {
	char inArr[100] = {};
	int i;
	scanf("%s", inArr);
	for(i = 0; i < strlen(inArr); i++){
		printf("%c", inArr[i]);
		if(i % 10 == 9)
			printf("\n");
	}
}