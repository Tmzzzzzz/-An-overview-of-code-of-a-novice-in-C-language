//给定任意一位正整数，输出由1*1到N*N的乘法口诀表
#include <stdio.h>
int main(){
	int N;
	printf("N*N的乘法口诀表：请输入N值：");
	scanf("%d",&N);
	int a=1;
	int b=1;
	int c;
	for(b=1;b<=N;b++){
		for(a=1;a<=b;a++){
			c=a*b;
			printf("%d*%d=%d",a,b,c);
			if(c<10){
				printf("   ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
} 
