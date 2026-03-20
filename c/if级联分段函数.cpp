#include <stdio.h>
int main(){
	int f,x;
	scanf("%d",&x);
	if ( x < 0){          //养成好习惯，都要加{} 
		f=-1;
	}else if(x == 0){      //等于判断一定记得是== 
		f=2;
	}else if(x> 10){
		f=10*x;
	}else{
		f=2*x;
	}
	printf("f(%d)=%d",x,f);
	return 0 ;             //return 0后面一定记得; 
} 
