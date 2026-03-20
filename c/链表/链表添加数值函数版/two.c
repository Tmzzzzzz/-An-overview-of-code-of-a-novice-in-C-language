#include <stdio.h>
#include <stdlib.h>
#include "../node.h"

typedef struct _list{
	node* head;     //list.head用于在函数内部对head的值做改变 
	node* tail;     //list.tail用于优化链表添加结点的流程 
}List;

void add(List* list,int number);

int main(int argc, char *argv[]){
	
	List list;
	list.head=list.tail=NULL;
	int number;
	do{
		scanf("%d",&number);
		if(number!=-1){
			add(&list,number);
		}	
	}while(number!=-1);
	
	printf("该链表编辑完成");
	
	return 0;
}

void add(List* list,int number){
	node *p=(node*)malloc(sizeof(node));
	p->value=number;
	p->next=NULL;
	if(list->tail==0){
		list->head=p;
		list->tail=p;
	}else{
		list->tail->next=p;  //将p接在链表末尾 
		list->tail=p;        //将链表最后一位更新为p，方便下一次更新链表 
	}
}
