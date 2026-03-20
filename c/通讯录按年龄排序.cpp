#include <stdio.h>
#include <string.h>

struct Friend{
	char name[20];
	char year[20];
	char phone[20];
};

int main(){
	int n;
	scanf("%d",&n);
	struct Friend a[n];
	
	int i;
	for(i=0;i<n;i++){
		scanf("%s %s %s",a[i].name,a[i].year,a[i].phone);
	}
	
	i=0;
	int j=0;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(strcmp(a[i].year,a[i+1].year)>0){
				struct Friend temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	
	i=0;
	for (i=0;i<n;i++){
		printf("%s %s %s\n",a[i].name,a[i].year,a[i].phone);
	}	
	
	return 0;
} 
