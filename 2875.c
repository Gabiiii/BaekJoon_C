#include <stdio.h>

int main(){
	int girl, boy, abs, tmp, team = 0;
	scanf("%d %d %d", &girl, &boy, &abs);
	if(girl > (boy * 2))
		team = boy;
	else
		team = girl/2;	
	tmp = ((girl - (team * 2)) + (boy - team));
    
	if(tmp > abs)
		printf("%d", team);
	else{
		tmp = abs - tmp;
		while(tmp > 0){
			tmp = tmp - 3;
			team--;
		}
		printf("%d", team);
	}
    return 0;
}