// 1110 더하기 사이클
#include <stdio.h>
void main() {
	int input, tmp = 0, ten, one, res = 0, cnt = 0;
	scanf("%d", &input);
	tmp = input;

	while (1) {
		if (tmp < 10)	ten = 0;
		else	ten = tmp / 10;
		one = tmp % 10;

		res = ten + one;
		//printf("%d + %d = %d\n", ten, one, res);
		cnt++;

		ten = tmp % 10;
		one = res % 10;
		tmp = (ten * 10) + one;

		if (tmp == input)
			break;
	}
	printf("%d", cnt);
}