#include <stdio.h>

void sum(int one,int two)
{
	int sum=0;
	int i;
	for(i=one;i<=two;i++){
		sum+=i;
	}printf("%d到%d的所有数之和为%d\n",one,two,sum);
}

int main(){
	
	sum(10,20);
	sum(20,30);
	sum(30,40);

	return 0;
} 
