#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="我喜欢她";
	char b[]="她也喜欢我";
	if(strcmp(a,b)==0){
		printf("还是单身适合你\n");
	}
	else{
		printf("终于等到你，还好我没放弃~yiyi\n");
	}
}
