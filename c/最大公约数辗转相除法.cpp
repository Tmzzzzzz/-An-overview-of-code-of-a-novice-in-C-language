#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int a1=a,b1=b;
	int i;
	while(b!=0){
		i=a%b;
		a=b;
		b=i;
	}printf("%d与%d的最大公约数是%d",a1,b1,a);
	return 0;
} 
