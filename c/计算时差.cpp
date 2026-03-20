#include <stdio.h>
int main(){
	int h1,h2,m1,m2;
	
	scanf("%d %d",&h1,&m1);
	scanf("%d %d",&h2,&m2);
	int t=h1*60-h2*60+m1-m2 ;
	printf("²îÖµÎª%dÊ±%dÃë",t/60,t%60);
	return 0;
}
