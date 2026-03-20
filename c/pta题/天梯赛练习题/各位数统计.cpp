#include <stdio.h>
#include <string.h>
int main(){
	char N[1001];  //不超过1000位的正整数过大，longlong无法解决，采用数列表示  
	int a[10]={0};
	scanf("%s",N);
	
	int num;
	int i;
	int len=strlen(N);
	for(i=0;i<len;i++){
		num=N[i]-'0';
		a[num]++;
	}
	
	for(i=0;i<10;i++){
		if(a[i]>0){
			printf("%d:%d\n",i,a[i]);9
		}
	}
	
	return 0;
} 
