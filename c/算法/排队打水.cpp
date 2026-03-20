/*
有 n 个人在一个水龙头前排队接水，假如每个人接水的时间为 T 
 ，请编程找出这 n 个人排队的一种顺序，使得 n 个人的平均等待时间最小。

一个人的等待时间不包括他的接水时间。

如果两个人接水的时间相同，编号更小的人应当排在前面。

输入格式
第一行为一个整数 n。
第二行 n 个整数，第 i 个整数 T 表示第 i 个人的接水时间 T 

输出格式
第一行为一种平均时间最短的排队顺序
第二行为这种排列方案下的平均等待时间（输出结果精确到小数点后两位）
*/

#include <stdio.h>
#include <stdlib.h>

struct A{
	int cnt;
	int time;
}person[10000];
double sum[10000]={0.0};
int i,j,n;
double total=0.0;
/*
int compare(const void* a,const void* b);
*/
void Quicks(struct A a[],int low,int high);

int main(){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&person[i].time);
		person[i].cnt=i+1;
	}
	
//	qsort(person,n,sizeof(struct A),compare);
		
	Quicks(person,0,n-1);
	for(j=1;j<n;j++){
		for(i=0;i<j;i++){
			sum[j]+=person[i].time;
		}
		total+=sum[j];
	}
	double ave=total/n;
	
	for(i=0;i<n;i++){
		printf("%d ",person[i].cnt);
	}
	printf("\n%.2lf",ave);
	return 0;
}

/*
int compare(const void* a,const void* b){
	return (*(struct A*)a).time-(*(struct A*)b).time;
}
*/

void Quicks(struct A a[],int low,int high){
	if(low>=high)return;
	
	int pivot=a[(low+high)/2].time;
	int pivot_cnt=a[(low+high)/2].cnt;
	int i=low;
	int j=high;
	while(i<=j){
		while(pivot>a[i].time||a[i].time==pivot&&a[i].cnt<pivot_cnt)i++;
		while(pivot<a[j].time||a[j].time==pivot&&a[j].cnt>pivot_cnt)j--;
		if(i<=j){
		    struct A temp=a[i];
		    a[i]=a[j];
		    a[j]=temp;
			i++;
			j--;
		}
	}
	if(low<j)Quicks(a,low,j);
	if(i<high)Quicks(a,i,high);
}
