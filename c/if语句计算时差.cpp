#include <stdio.h>
int main(){
	int h1,h2,m1,m2,H,M;
	printf("输入之后几时几分\n") ;
	scanf("%d %d",&h1,&m1);
	printf("输入之前几时几分\n");
	scanf("%d %d",&h2,&m2);
	H=h1-h2;
	M=m1-m2;
	if( M < 0 ){
		M+=60;
		H--;
	}
	printf("差值为%d时%d秒",H,M);
	return 0;
}
