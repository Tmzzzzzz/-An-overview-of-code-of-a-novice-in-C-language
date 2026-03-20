#include <stdio.h>
#include <string.h>

char* mycat(char* s1,const char* s2){
	
	char* back=s1;
	while(*s1!='\0'){
		s1++;
	}
	while(*s2!='\0'){//对于指针常量一定注意记得带* 
		*s1=*s2;
		s1++;
		s2++;
	}
	*s1='\0';
	
	return back;
}

int main(){
	char s1[20]="Hello";
	const char s2[]="World";
	char* a=mycat(s1.s2);
	printf("%s",a);
	
	return 0;
}
