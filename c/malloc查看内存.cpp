#include <stdio.h>
#include <stdlib.h>

int main(){
	void *p;
	int cnt=0;
	while((p=malloc(1024*1024))){
		cnt++;
	}
	
	printf("%dMB",cnt);
	return 0;
}
