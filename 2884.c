#include <stdio.h>
int main(){
	int hour, min;
	scanf("%d %d", &hour, &min);
	
	if(hour < 0 || hour > 24 || min < 0 || min > 60)	return 0;
	if(min >= 45)	 min -= 45;
	else{
		if(hour == 0)	hour = 23;
		else	hour--;
		min += 15;		
	}	
	printf("%d %d", hour, min);
	
	return 0;
}