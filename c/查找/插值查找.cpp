#include <stdio.h>

int Interpolation(int a[],int len,int target){
	int left=0;
	int right=len-1;
	while(left<=right&&target<=a[right]&&target>=a[left]){
		if(left==right){
			if(target==a[left]){
				return left;
			}else{
				return -1;
			}
		}
		int loc=left+(right-left)*(target-a[left])/(a[right]-a[left]);
		if(a[loc]<target){
			left=loc+1;
		}else if(a[loc]>target){
			right=loc-1;
		}else if(a[loc]==target){
			return loc;
		}
	}
	return -1;
}

int main()
{
	int a[]={1,100,200,300,321,412,654};
	int num;
	int len=sizeof(a)/sizeof(int);
	printf("输入要查找的数：");
	scanf("%d",&num);
	int loc=Interpolation(a,len,num);
	if(loc==-1){
		printf("无此值");
	}
	else{
	printf("目标在第%d个" ,loc+1);
	}
	return 0;
}
