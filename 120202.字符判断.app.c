#include<stdio.h>
void main()
{
	char a;
	printf("请输入wasd\n");
	scanf("%c",&a);
	switch(a)
	{
	case 'w':printf("你在点击“上”键\n");break;
	case 'a':printf("你在点击“左”键\n");break;
	case 's':printf("你在点击“下”键\n");break;
	case 'd':printf("你在点击“右”键\n");break;

	default:printf("输入错误，请输入wasd键");break;
	}
}
