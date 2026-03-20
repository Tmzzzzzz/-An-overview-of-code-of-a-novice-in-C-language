#include <stdio.h>
int main(){
	int n;
	int i=1;
//	int sign;
	printf("请输入n值：");
	scanf("%d",&n);
	double a;
	for(i=1;i<=n;i++){
		a+=1.0/i;
//		a+=sign/i;
//		sign=-sign;         //使其变为1-1/2+1/3-...+-1/n的形式 
	}
	printf("1/n的前%d项和是%f",n,a);
	return 0;
}
