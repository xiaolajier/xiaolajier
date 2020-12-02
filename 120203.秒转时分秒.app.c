#include<stdio.h>
void main()
{
	int h,m,s;
	scanf("%d",&s);
	if(s>=0 && s<=86399)
	{
	h=s/3600;
	m=s/60%60;
	s%=60;
	printf("%.2d:%.2d:%.2d\n",h,m,s);
	}
	else
	{
		printf("已超过23:59:59，请输入86399以内的\n");
	 }
}
