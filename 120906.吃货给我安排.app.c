#include<stdio.h>
void main(){
	char a1[7];
	char a2[]="春节";
	char a3[]="中秋节";
	char a4[]="端午节";
	char a5[]="元宵节";
	printf("吃货的日程总是被安排的明明白白，请问现在是什么节？我们就给你安排什么吃的\n");
	scanf("%s",&a1);
	if(strcmp(a1,a2)==0){
		printf("给我安排饺子\n");
	}
	else if(strcmp(a1,a3)==0){
		printf("给我安排月饼\n");
	}
	else if(strcmp(a1,a4)==0){
		printf("给我安排粽子\n");
	}
	else if(strcmp(a1,a5)==0){
		printf("给我安排汤圆\n");
	}
	else{
		printf("输入错误，请输入正常的节日\n");
	}
}
