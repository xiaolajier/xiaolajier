#include<stdio.h>
void main()
{
	int a;
	printf("0-50之间有一个数，看看你蒙的能力\n");
	while(1)
	{
	scanf("%d",&a);
	if(a==23)
	{

		printf("恭喜你，答对啦\n");
	}
	else if(a<23)
	{
	
		printf("小了小了，再想想\n");
	}
	else if(a>23)
	{

		printf("大了大了，再想想\n");
	}
	}
}
