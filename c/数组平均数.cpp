#include <stdio.h>
int main(){
	
	int a;
	scanf("%d",&a);
	int number[100];
	int cnt=0;
	int sum=0;
	while(a!=0){
		number[cnt]=a;
		sum+=number[cnt];
		cnt++;
		scanf("%d",&a);
	}
	int ave=sum/cnt;
	printf("平均数是%d\n",ave);
	int i;
	printf("大于平均数的数有");
	for(i=0;i<cnt;i++){
		if(number[i]>ave){
			printf("%d ",number[i]);
		}
	} 
	
	return 0;
} 
