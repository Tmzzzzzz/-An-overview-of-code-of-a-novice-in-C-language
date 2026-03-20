#include <stdio.h>
int main(){
	int s,t,e,T;
	printf("输入时间及流逝分钟数，如1130，30\n"); 
	scanf("%d %d",&s,&t);
	e=s%100+s/100*60+t;
	T=e/60*100+e%60 ;
	printf("%d",T);
	return 0;
} 
