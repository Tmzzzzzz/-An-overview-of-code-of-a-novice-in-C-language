//给定不超过6的正整数A，考虑从A开始的四个连续整数。输出由他们组成的无重复数字的三位数 
#include <stdio.h>
int main(){
	int x;
	int a,b,c; 
	scanf("%d",&x);
	a=x;
	b=x;
	c=x;
	
	int cnt=0;
	for(a=x;a<=x+3;a++){
		b=x;
		for(b=x;b<=x+3;b++){
			c=x;
			for(c=x;c<=x+3;c++){
				if(a!=b&&b!=c&&c!=a){
						printf("%d ",100*a+10*b+c);
						cnt++;
						if(cnt==6){
						printf("\n");
						cnt=0;
					}
				}
			}
		}
	}
	return 0;
} 
