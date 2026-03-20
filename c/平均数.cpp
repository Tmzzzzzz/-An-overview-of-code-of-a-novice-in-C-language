#include <stdio.h>
int main(){
	
	int number=0;
	int sum=0;
	int count=0;
	
/*	while(number!=-1){
		printf("输入本次数字："); 
		scanf("%d",&number);
		if(number!=-1){
		count++;
		sum+=number;
		}
	}
	//优化前 
*/
	
	printf("输入你的数字：(输入-1以结束)");
	scanf("%d",&number);
	while(number!=-1){
		count++;
		sum+=number;
		printf("输入你的数字：");
		scanf("%d",&number);
	}
	//优化后 

	printf("平均数为%f",1.0*sum/count);
	
	return 0;
}
