#include <stdio.h>
int main(){
	int max;
	printf(" ‰»Î»°÷µ∑∂Œß:");
	scanf("%d",&max);
	int prime[max];
	int i;
	int x;
	for(i=0;i<max;i++){
		prime[i]=1;
	}
	for(x=2;x<max;x++){
		if(prime[x]==1){
			for(i=2;i*x<max;i++){
				prime[i*x]=0;
			}
		}
	}
	int cnt=0;
	for(i=2;i<max;i++){
		if(prime[i]){
			printf("%d\t ",i);
			cnt++;
			if(cnt%5==0){
				printf("\n");
			}
		}
	}
	
	return 0;
	
} 
