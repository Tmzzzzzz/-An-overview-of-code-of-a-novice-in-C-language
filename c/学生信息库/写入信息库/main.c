#include <stdio.h>
#include "../student.h"

void getList(Student student[],int number);

int save(Student student[],int number);

int main(){
	int number=0;
	printf("输入学生数量\n");
	scanf("%d",&number);
	Student student[number];
	
	getList(student,number);
	if(save(student,number)){
		printf("SUCCESS");
	}else{
		printf("FAILED");
	}
	return 0;
}

void getList(Student student[],int number){
	char format[stlen];
	sprintf(format,"%%%ds",stlen-1);
	
	int i;
	for(i=0;i<number;i++){
		printf("名字：\n");
		scanf(format,student[i].name);
		printf("性别（0-男，1-女，2-未知）\n");
		scanf("%d",&student[i].gender);
		printf("年龄\n");
		scanf("%d",&student[i].age);
	}
	
}

int save(Student student[],int number){
	int ret=-1;
	FILE* fp=fopen("../student.data","w");
	if (fp){
		ret=fwrite(student,sizeof(Student),number,fp);
		fclose(fp);
	}
	return ret==number;
}

