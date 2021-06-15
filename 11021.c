#include <stdio.h>
int main(){
	int cnt, a, b, i;
	scanf("%d", &cnt);
	
	for(i = 0; i < cnt; i++){
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i+1, a+b);
	}
	
	return 0;
}