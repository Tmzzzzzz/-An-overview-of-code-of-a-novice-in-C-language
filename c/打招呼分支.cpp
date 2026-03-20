#include <stdio.h>
int main(){
	int type;
	scanf("%d",&type);
	switch(type){
		case 1:
			printf("牢底早上好");
			break;
		case 2:
			printf("牢底中午好");
			break;		
		case 3 :
			printf("牢底下午好");
			break;
		case 4:
			printf("牢底干啥呢");
			break;
	}
	return 0;
}
