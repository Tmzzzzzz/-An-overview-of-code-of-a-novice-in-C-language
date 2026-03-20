//统计M与N内的素数个数并求和
#include <stdio.h>
int main(){
	int M,N;
	printf("请输入取值区间\n");
	scanf("%d%d",&M,&N);
	
	int cnt=0;
	int i;
	int total=0;
	for(i=M;i<=N;i++){
		int x;
		int yes=1;
		if(i==1){
			yes=0;
		}
		for(x=2;x<i;x++){
			if(i%x==0){
				yes=0;
				break;
			}
		}
		if(yes==1){         //不要把if后方==写成=！！！！！！ 
			cnt++;
			total+=i;
		}
	}
	printf("该区间内有%d个素数，和为%d",cnt,total);
	return 0;
} 
