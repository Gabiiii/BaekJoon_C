#include <stdio.h>
int main(){
	int cnt, i, inp, min = 1000001, max = -1000001;
	scanf("%d", &cnt);
	
	for(i = 0; i < cnt; i++){
		scanf("%d", &inp);
		if(inp > max)	max = inp;
		if(inp < min)	min = inp;
	}
	
	printf("%d %d", min, max);
	
	return 0;
}