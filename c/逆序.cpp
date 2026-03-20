#include <stdio.h>
int main(){
	int number;
	int ret;
	printf("输入要逆序的数：");
	scanf("%d",&number);
	
/*输出后末尾的0会被无视 
   	while(number>0){
		int one=number%10;
		ret=ret*10+one;
		number/=10;
	}
	printf("逆序后为%d",ret);
*/

	while(number>0){
		int one=number%10;
		printf("%d",one);
		number/=10;
	}//输出后末尾0保留 
	
	return 0;
}
