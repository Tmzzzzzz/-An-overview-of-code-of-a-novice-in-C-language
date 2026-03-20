#include <stdio.h>
#include <stdbool.h>

struct date{
	int month;
	int day;
	int year;
};

int daynumber(struct date a);

bool isrun(struct date a);

struct date* write(struct date* a);

void output(struct date* a);

int main(){
	struct date today,tomorrow;
	printf("输入今日的日期：（年 月 日）\n");
//	scanf("%d %d %d",&today.year,&today.month,&today.day);
	write(&today);
	
	if(today.day==daynumber(today)&&today.month==12){
		tomorrow.day=1;
		tomorrow.month=1;
		tomorrow.year=today.year+1;		
		
	}else if(today.day==daynumber(today)){
		tomorrow.day=1;
		tomorrow.month=today.month+1;
		tomorrow.year=today.year;
		
	}else{
		tomorrow.day=today.day+1;
		tomorrow.month=today.month;
		tomorrow.year=today.year;
		
	}
//	printf("明天是%d-%d-%d",tomorrow.year,tomorrow.month,tomorrow.day);
	output(&tomorrow) ;
	
	return 0 ;
}

struct date* write(struct date* a){
	scanf("%d",&a->year);
	scanf("%d",&a->month);
	scanf("%d",&a->day);
	return a;
}

void output(struct date* a){
	printf("明天是%d-%d-%d",a->year,a->month,a->day);
}

int daynumber(struct date a){
	int number;
	const int total[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if( a.month==2 && isrun(a)==true ){
		number=29;
	}else{
		number=total[a.month-1];
	}
	return number;
}

bool isrun(struct date a){
	bool back=false;
	if( a.year%100!=0 && a.year%4==0 || a.year%400==0 ){
		back=true;
	}
	return back;
}
