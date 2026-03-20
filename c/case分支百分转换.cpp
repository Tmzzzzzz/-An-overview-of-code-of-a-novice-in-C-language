#include <stdio.h>
int main(){
	int score;
	printf("输入你的成绩\n"); 
	scanf("%d",&score);
	score/=10 ;
	printf("你的五分制成绩是：");
	switch(score){
		case 10:
		case 9:
			printf("A");
		    break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("E");
	}
	return 0;
} 
