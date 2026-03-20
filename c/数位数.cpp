#include <stdio.h>
int main(){
	int figure;
	int n=0;
	scanf("%d",&figure);
     do{
		n++;
		figure/=10;
	}
	while(figure>0);
	printf("ÓĞ%dÎ»Êı",n);
	return 0;
}
