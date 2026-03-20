#include <stdio.h>

void QuickSort(int a[],int low,int high);

int partition(int a[],int low,int high);

int main(){
	int number;
	scanf("%d",&number);
	int a[number]; 
	int i=0;
	for (i=0;i<number;i++){
		scanf("%d",&a[i]);
	}
	
	int low=0;
	int high=number-1;
	QuickSort(a,low,high);
	
	printf("快速排序结果为\n");
	i=0;
	for(i=0;i<high+1;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}

void QuickSort(int a[],int low,int high){
	if(low<high){
		int key=partition(a,low,high);         //返回值为基准数，即从该数的左/右进行排序   
		QuickSort(a,low,key-1);
		QuickSort(a,key+1,high);
	}
}

int partition(int a[],int low,int high){
	int pivot=a[low];
	while(low<high){
		
		while(low<high&&a[high]>=pivot){
			high--;
		}
		a[low]=a[high];         //先从右开始查找比pivot小的数，并将其插至low位 
		
		while(low<high&&a[low]<=pivot){
			low++;
		}
		a[high]=a[low];         //从左查找比pivot大的数，并插至high位 
		
	}
	a[low]=pivot;
	return low;  //或high;
}
