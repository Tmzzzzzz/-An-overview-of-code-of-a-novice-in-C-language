#include <stdio.h>
int main(){
	int  x;
	printf("请输入你的数字\n");
	scanf("%d",&x );
	int judge=1;
	for(int i=2;x>i;i++){
		if(x%i==0){
			judge=0;
			break; 
		}
	}
	if(judge=1&&x!=1){
		printf("这个数是素数");
	}
	else{
		printf("这个数不是素数"); 
	}
	return 0;
}
