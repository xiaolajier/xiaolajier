#include<stdio.h>
void main()
{
	int x;
	printf("输入一个X值，就会有Y对应的值。X=");
	scanf("%d",&x);
	if(x<1)
	{
	printf("Y=");
	printf("%d\n",x);
	}
	else if(x>=1 && x<10)
	{
	printf("Y=");
	printf("%d\n",2*x-1);
	}
	else if(x>=10)
	{
	printf("Y=");
	printf("%d\n",3*x-11);
	}
}
