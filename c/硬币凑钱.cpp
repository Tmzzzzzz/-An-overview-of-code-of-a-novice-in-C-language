#include <stdio.h>
int main() {
	int money;
	printf("输入要凑的钱数:"); 
	scanf("%d",&money);
	int one,two,five;
	int exit=0;
	for(one=1;one<money*10;one++){
		for(two=1;two<money*10/2;two++){
			for(five=1;five<money*10/5;five++){
				if(one+two*2+five*5==money*10){
					printf("至少%d个一角%d个二角%d个五角可以凑出%d元",one,two,five,money);
					//goto chu;
					exit=1;
					break;
				}
			}if(exit)break;
		}if(exit)break;
	}
//	chu:
		return 0;
		
}
