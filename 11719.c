// 11719 그대로 출력하기2
#include <stdio.h>
void main(){
	char inp;
	inp = getchar();

	while(inp != EOF){
		putchar(inp);
		inp = getchar();
	}
}