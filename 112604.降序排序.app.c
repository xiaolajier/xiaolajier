#include<stdio.h>
void main()
{
	int a,b,c,i;
	printf("请输入三个数字，我们将会帮你从大到小排序\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		i=a;
		a=b;
		b=i;

	}
	if(a<c)
	{
		i=a;
		a=c;
		c=i;
	}
	if(b<c)
	{
		i=b;
		b=c;
		c=i;
	}
	printf("降序是：\n");
	printf("%d\n%d\n%d\n",a,b,c);

}
