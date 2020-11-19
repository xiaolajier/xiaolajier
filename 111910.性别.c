#include<stdio.h>
void main()
{
	int a;
	printf("性别查询器\n");
	scanf("%d",&a);
	if(a==1)
	{
	printf("性别是：");
	printf("男\n");
	}
	else if(a==0)
	{
	printf("性别是：");
	printf("女\n");
	}
	else
	{
		printf("输入有误，请重新输入");
	}
}
