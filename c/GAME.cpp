#include <stdio.h>
int main(){
	int game;
	int Player;
	scanf("%d %d",&game,&Player);
	if(game==0){
		if(Player==1){
			printf(" My turn\n");
		}else{
			printf("Your turn\n");
		}
	}else{
		printf("GAME OVER");
	}
	return 0;
}
