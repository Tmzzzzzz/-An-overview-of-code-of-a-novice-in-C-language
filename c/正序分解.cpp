#include <stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	
	int ten=1;
	int t=x;          //此处用t储存x的值，否则后续x的值发生改变 
	while(t>9){      
		ten*=10;
		t/=10;
	}
	
	int a;
	do{
		a=x/ten;
		printf("%d",a);
		if(ten>9){        //此处变量为ten，否则末尾的0没有空格 
			printf(" ");
		}
		x%=ten;
		ten/=10;
	}while(ten>0);    // 此处变量为ten，否则末尾的0会消失 
	
	return 0;
} 
