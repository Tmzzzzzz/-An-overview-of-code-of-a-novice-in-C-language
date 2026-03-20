#include <stdio.h>

int search(int key,int a[],int length){
	int back=-1;
	int i;
	for(i=0;i<length;i++){
		if(a[i]==key){
			back=i;
		}
	}
	return back;
}

int main(){
	
	printf("输入数字");
	int a[]={1,6,4,5,8,9,7,3,2,};
	int x;
	scanf("%d",&x);
	int loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1){
		printf("%d在该数组第%d个",x,loc+1);
	}else{
		printf("该数字不在数组内");
	}
	
	return 0;
}
