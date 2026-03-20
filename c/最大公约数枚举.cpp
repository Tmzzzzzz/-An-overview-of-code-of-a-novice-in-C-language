#include <stdio.h>
int main()
{
	int a,b,min;
	int i=1;
	scanf("%d %d",&a,&b);
	if (a<b){
		min=a;
	}else{
		min=b;
	}
	
	int max=1;
	for(i=1;i<=min;i++){
		if(a%i==0&&b%i==0){
			max=i;
		}
	}
	
	printf("最大公约数为%d",max);
	
	return 0;
}
