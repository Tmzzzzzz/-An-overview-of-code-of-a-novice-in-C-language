#include <stdio.h>
int main(){
	int i=0;
	int x;
	const int number=10;
	int cnt[number];
	scanf("%d",&x);
	for(i=0;i<number;i++){
		cnt[i]=0;
	}
	while(x!=-1){
		if(x>=0&&x<=9){
			cnt[x]++;
		}	
		scanf("%d",&x);
	}
	for(i=0;i<number;i++){
		printf("%d:%d\n",i,cnt[i]);
	}
	return 0;
} 
