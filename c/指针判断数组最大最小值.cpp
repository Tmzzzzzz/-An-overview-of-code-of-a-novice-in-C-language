#include <stdio.h>

void minmax(int a[],int length,int *max,int *min);

int main(){

	int a[1000]; 
	int k;
	for(k=0;k<1000;k++){
		a[k]=0;
	}
	int i=0;
	for(i=0;i<1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
			int I;
			for(I=i;I<1000;I++){
				a[I]=a[0];
			}
			break;
		}
	}
	
	int max,min;
	minmax(a,sizeof(a)/sizeof(a[0]),&max,&min);
	printf("MAX:%d\nMIN:%d",max,min);
	return 0;
	
}

void minmax(int a[],int length,int *max,int *min){
	int i=0;
	*max=*min=a[0];
	for(i=0;i<length;i++){
		if(a[i]>*max){
			*max=a[i];
		}
		if(a[i]<*min){
			*min=a[i];
		}
	}
	
}
