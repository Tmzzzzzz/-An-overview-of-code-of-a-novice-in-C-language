#include  <stdio.h>
int main(){
	int score,f;
	printf("ÊäÈë³É¼¨£º\n");
	scanf("%d",&score);
	if(score>100 or score<0){
	 f=0;
	printf("ÀÎµ×Äã×öÃÎÄØ£¬"); 
    }else if(score>=90&&score<=100){
		f=5;
	}else if(score>=80){
		f=4;
	}else if(score>=70){
		f=3;
	}else if(score>=60){
		f=2;
	}else if(score>=0){
		f=1;
	}
	printf("%d·Ö£¡",f);
	return 0;
}
