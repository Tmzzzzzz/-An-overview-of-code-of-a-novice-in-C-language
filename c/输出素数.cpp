#include <stdio.h>
int main(){
	//输出指定数量与范围的素数 
	int count=0;
	
	int number;
	int max;
	
	printf("输入范围：");
	scanf("%d",&max);
	printf("\n输入所需个数:");
	scanf("%d",&number);
	
	int x=2;
	for(x=2;x<max&&count<number;x++){
		int a=1;
		int i;
		for(i=2;x>i;i++){
			if(x%i==0){
				a=0;
				break;
			}
		}
		if(a==1){
			printf("%d\t",x);
			count++;
			if (count%5==0){
				printf("\n");
			}
		}
	}
	
	printf("\n输出%d以内的%d个素数如上",x,count);
	return 0;
} 
