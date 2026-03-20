#include <stdio.h>
int main(){
	int n;
	int ret=1;
	printf("输入要进行阶乘的数\n");
	scanf("%d",&n);
	
/*正常阶乘 
	int i=1;
	for(i=1;i<=n;i++){
		ret*=i;
	}
	printf("%d!=%d",n,ret);
*/

	int i=n;
	for(;n>1;n--){
		ret*=n;
	}
	printf("%d!=%d",i,ret);
	//倒序阶乘，结果相同 
	
	return 0;
} 
