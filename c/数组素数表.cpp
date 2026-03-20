#include <stdio.h>

int isPrime(int x,int prime[],int number){
	int i;
	int ret=1;
	for(i=0;i<number;i++){
		if(x%prime[i]==0){
			ret=0;
		}
	}
	return ret;
}

int main(){
	
	int max;
	printf("你要几个素数\n");
	scanf("%d",&max);
	printf("\n如下\n");
	
	int prime[max]={2};
	int cnt=1;
	int i=3;
	while(cnt<max){
		if(isPrime(i,prime,cnt)==1){
			prime[cnt]=i;
			cnt++;
		}
		i++;
	}
	for(i=0;i<max;i++){
		printf("%d\t",prime[i]);
		if((i+1)%5==0){
			printf("\n");
		}
	}
	
	return 0;
}
