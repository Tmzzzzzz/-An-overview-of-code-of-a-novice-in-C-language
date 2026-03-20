#include <stdio.h>
#include "../student.h" 

void read(FILE* fp,int index);

int main(int argc, char *argv[]) {
	FILE* fp=fopen("../student.data","r");
	if(fp){
		fseek(fp,0L,SEEK_END);
		int size = ftell(fp);
		int number= size/sizeof(Student);
		printf("总共有%d个档案在库，你要第几个？\n",number);
		int index=0;
		scanf("%d",&index);
		read(fp,index-1);
		fclose(fp);
	}
	
	return 0;
}

void read(FILE* fp,int index){
	fseek(fp,sizeof(Student)*index,SEEK_SET);
	Student one;
	if(fread(&one,sizeof(Student),1,fp)==1){
		printf("为您查找第%d个学生:\n",index+1);
		printf("姓名：%s\n",one.name);
		printf("性别：");
		switch(one.gender){
			case 0:printf("男\n");break;
			case 1:printf("女\n");break;
			case 2:printf("未知\n");break;
		}
		printf("年龄：%d\n",one.age);	
	}
}
