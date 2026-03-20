#include <stdio.h>
#include <stdlib.h>

void CountSort(int a[],int number);

int main(){
	int number;
	scanf("%d",&number);
	int a[number]; 
	int i=0;
	for (i=0;i<number;i++){
		scanf("%d",&a[i]);
	}
	
	CountSort(a,number);
	
	printf("计数排序结果为\n");
	i=0;
	for(i=0;i<number;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}

void CountSort(int a[],int number){
	
	int i=0;
	int max=a[0],min=a[0];
	for(i=0;i<number;i++){
		if(a[i]>max){
			max=a[i];
		}else if(a[i]<min){
			min=a[i];
		}
	}
	int range=max-min+1;
	int* cnt=(int*)calloc(range,sizeof(int));         //若替换为malloc(range*sizeof(int))，需要遍历cnt[i]数组初始化为0 
	
	for(i=0;i<number;i++){
		cnt[a[i]-min]++;          
	}
	
	int index=0;
	for(i=0;i<range;i++){         //对于取值123456... 
		while(cnt[i]>0){          //对于该取值的计数cnt[i]大于0 时 
			a[index++]=min+i;     //将a[i]赋予该值并移至下一位 (不会归0) 
			cnt[i]--;             //对该取值的计数减1 
		}
	}
	
	free(cnt);
}

