#include<stdio.h>
void main()
{
	int a;
	printf("打工人工资等级划分\n");
	scanf("%d",&a);
	if(a<0)
	{
	printf("花呗未还");
	}
	else if(a<=100 && a>=0)
	{
	printf("赤贫\n");
	}
	else if(a<=500 && a>=101)
	{
	printf("贫困\n");
	}
	else if(a<=1500 && a>=501)
	{
	printf("普通打工人");
	}
	else if(a<=3000 && a>=1501)
	{
	printf("普通清洁工");
	}
	else if(a<=5000 && a>=3001)
	{
	printf("水电工");
	}
	else if(a<=12000 && a>=5001)
	{
	printf("老板或伙夫");
	}	
	else if(a<=50000 && a>=12001)
	{
	printf("程序员");
	}
}
