#include <stdio.h>
#include <stdlib.h>

int compare(const void* a,const void* b);   //改成其他类型数组时，#include <stdio.h>

int main(){
	int number;
	scanf("%d",&number);
	int i;
	
/*	int a[number];
	for(i=0;i<number;i++){
		a[i]=0;                   //变长数组，不能用a[n]={0}初始化 
	}*/
	int* a=(int*)calloc(number,sizeof(int));   //使用calloc将a转为数组并初始化 
	
	for(i=0;i<number;i++){
		scanf("%d",&a[i]);
	}
	
	qsort(a,number,sizeof(int),compare);    //来自stdlib.h 
	
	for(i=0;i<number;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}

int compare(const void* a,const void* b){
	return *(int*)a-*(int*)b;              //改成其他类型数组时，此处int改成对应类型
	//降序反之 
} 
