#include <stdio.h>

void ChoiceSort(int a[],int number);

int main(){
	int number;
	scanf("%d",&number);
	int a[number]; 
	int i=0;
	for (i=0;i<number;i++){
		scanf("%d",&a[i]);
	}
	
	ChoiceSort(a,number);
	
	return 0;
}

void ChoiceSort(int a[],int number){
	int i,j;
	for(i=0;i<number-1;i++){
		 int minIndex=i;         //从小到大排 
//		 int maxIndex=i;
		for(j=i+1;j<number;j++){
			if(a[j]<a[minIndex]){
				minIndex=j;
//			}else if(a[j]<a[maxIndex]){
//				maxIndex=j;
			}
		}
		int x=a[i];
		a[i]=a[minIndex];
		a[minIndex]=x;
	}
	printf("选择排序结果为\n");
	i=0;
	for(i=0;i<number;i++){
		printf("%d ",a[i]);
	}
}
