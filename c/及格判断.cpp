#include <stdio.h>
int main(){
	const int PASS=60;
	int score;
	printf("输入成绩");
	scanf("%d",&score);
	if(score > PASS)
	printf("你通过了");
	else
	 printf("不及格");
	printf("，未来可期");
	return 0;
} 
