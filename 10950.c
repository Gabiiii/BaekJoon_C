#include <stdio.h>
int main(){
	int cnt, a, b, i;
	scanf("%d", &cnt);
	
	for(i = 0; i < cnt; i++){
		scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
	}
	
	return 0;
}