#include<stdio.h>
#include<windows.h>
void main()
{

	int a=1;
	printf("秒表器\n");
	while(1)
	{
		printf("现在是%d秒\n",a);
		a++;
		Sleep(1000);
	}
}

