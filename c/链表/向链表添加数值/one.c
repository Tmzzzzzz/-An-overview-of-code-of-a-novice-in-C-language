#include <stdio.h>
#include <stdlib.h>
#include "../node.h"



int main(int argc, char *argv[]) {
	
	node *head=NULL;
	int number;
	do{
		scanf("%d",&number);
		if(number!=-1){
			node *p=(node*)malloc(sizeof(node));
			p->value=number;
			p->next=NULL;
			node* last=head;
			if(last){                     //last不为NULL时，即head不为NULL时 
				while(last->next){        //(*last).next存在值，则将last前推一位 
					last=last->next;
				}
				last->next=p;          //将p接在链表后 
			}else {
				head=p;
			}
		}
	}while(number!=-1);
	
	printf("该链表编辑完成");
	
	
	return 0;
}
