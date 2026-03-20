#include <stdio.h>

void InsertionSort(int a[],int number);

int main(){
	int number;
	scanf("%d",&number);
	int a[number]; 
	int i=0;
	for (i=0;i<number;i++){
		scanf("%d",&a[i]);
	}
	
	InsertionSort(a,number);
	
	
	return 0;
}

void InsertionSort(int a[],int number){
	int i,j;
	for(i=1;i<number;i++){
		int k=a[i];
		j=i-1;
		while(j>=0&&a[j]>k){    //小的在前 
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
	printf("插入排序如下\n");
	i=0;
	for(i=0;i<number;i++){
		printf("%d ",a[i]);
	}
}
