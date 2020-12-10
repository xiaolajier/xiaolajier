#include<stdio.h>
#include<string.h>
void main()
{
	char d[30];
	printf("请输入我的绰号才能进入游戏：");
	char a[]="小辣鸡";
	char b[]="小辣鸡";
	scanf("%s",&d);
	if(strcmp(a,b)==0){
		printf("游戏开始");
	}
		while(1)
		{
			int c;
			printf("请输入一个1-20的数字,输入正确了才能完成\n");
			scanf("%d",&c);
			if(c==12)
			{
				printf("牛批，对撩\n");
			}
			else if(c<12)
			{
				printf("小啦小啦,继续猜\n");
			}
			else if(c>12)
			{
				printf("大撩大撩，继续猜\n");
			}
			else
			{
				printf("听话，乖乖输入1-20的数字\n");
			}
		}
	else
	{
		printf("错撩，想下我经常自称自己什么,或我经常在书上的图案");
	}
}
