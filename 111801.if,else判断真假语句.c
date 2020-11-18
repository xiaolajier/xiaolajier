#include<stdio.h>
void main()
{
	int a=3,b=4,c=5,x=a,y=b;
	if(a+b>c&&b==c)
	{ 
	
		printf("真\n");
	}
	else
	{
		printf("假\n");
	}

	if(a||b+c&&b-c)
	{ 
	
		printf("真\n");
	}
	else
	{
		printf("假\n");
	}

	if(!(a>b)&&!c||1)
	{ 
	
		printf("真\n");
	}
	else
	{
		printf("假\n");
	}

	if(!(x=a)&&(y=b)&&0)
	{ 
	
		printf("真\n");
	}
	else
	{
		printf("假\n");
	}

	if(!(a+b)+c-1&&b+c/2)
	{ 
	
		printf("真\n");
	}
	else
	{
		printf("假\n");
	}
}
