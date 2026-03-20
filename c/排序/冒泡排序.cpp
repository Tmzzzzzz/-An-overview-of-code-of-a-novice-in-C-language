#include <stdio.h>

void BubbleSort(int a[],int number);

int main(){
	int number;
	scanf("%d",&number);
	int a[number]; 
	int i=0;
	for (i=0;i<number;i++){
		scanf("%d",&a[i]);
	}
	BubbleSort(a,number);
	
	return 0;
}

void BubbleSort(int a[],int number){
	int i=0,j=0;
	for(i=0;i<number;i++){
		for(j=0;j<number-1-i;j++){
			if(a[j+1]>a[j]){         //大的在前 
				int x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	printf("冒泡排序结果为\n");
	i=0;
	for(i=0;i<number;i++){
		printf("%d ",a[i]);
	}
} 
