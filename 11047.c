#include <stdio.h>

int main(){
	int inp, money, i, coin = 0;
	scanf("%d %d", &inp, &money);
	
	int *change = malloc(sizeof(int)*inp);
	for(i = 0; i < inp; i++)
		scanf("%d", &change[i]);
	
	for(i = inp - 1; i >= 0; i--){
		if(money == 0)
			break;
		else{
			coin += money / change[i];
			money %= change[i];
		}
	}
	printf("%d", coin);
    return 0;
}