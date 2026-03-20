#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int number=rand()%1000+1;
	int count=0;
	int a=0;
	printf("一个1-1000的炸弹已就绪，请开始你的表演OwO\n");
	do{
		printf("请输入你本次的数字：");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("大了，菜就多练\n");
		}else if(a<number){
			printf("小了，多练也菜\n");
		}
	}while(a!=number);
	if(count<=5){
		printf("666这个人是挂，%d次猜到，你诗人啊？",count);
	} 
	else if(count<=10){
		printf("有点实力0o0,竟然只用了%d次就猜到了吗，要是你的丁丁有这么长就好了",count);
	}
	else if(count<=15){
		printf("%d次...你已经是一个成熟的菜鸡了，加油 :)",count);
	}
	else if(count<=20){
		printf("虽然但是，人不能，至少不应该介么蠢...你说是吧，%d次男?",count);
	}
	else{
		printf("唐比一个，无需多盐 0v0");
	}
	printf("\n") ;
	system("pause");
	
	return 0;
}
