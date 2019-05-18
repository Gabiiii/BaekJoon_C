// 4344 평균은 넘겠지
#include <stdio.h>
void main() {
	int num, i, j, stu, cnt = 0;
	int sco[100];
	double avg = 0;
	scanf("%d", &num);
	
	for(i = 0; i < num; i++){
		scanf("%d", &stu);
		for(j = 0; j < stu; j++){
			scanf("%d", sco[j]);
			avg += (double)sco[j];
		}
		avg = avg/(double)stu;
		
		for(j = 0; j < stu; j++){
			if(avg < (double)sco[j])
				cnt++;
		}
		printf("%.2lf%%\n", ((double)(cnt/stu))*100.0);
		avg = 0;
		cnt = 0;
	}
}