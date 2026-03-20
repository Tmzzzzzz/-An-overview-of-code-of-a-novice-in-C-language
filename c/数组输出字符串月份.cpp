#include <stdio.h>

int main(){
	
	char s[][10]={"January","February","March","April","May","Jnue","July","August"};//对字符串二维数组来讲，第二维是字符串的长度上限 
	int i;
	for(i=0;i<8;i++){
		printf("%s\n",s[i]);
	}
	
	
	return 0;
}

