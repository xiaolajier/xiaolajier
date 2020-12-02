#include<stdio.h>
void main()
{
	int a;
	printf("QS大学前1-20大学排名，请输入1-20的数\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:printf("麻神理工学院\n");break;
	case 2:printf("斯坦福大学\n");break;
	case 3:printf("哈佛大学\n");break;
	case 4:printf("牛津大学\n");break;
	case 5:printf("加利福尼亚理工学院\n");break;
	case 6:printf("ETG Ztrich\n");break;
	case 7:printf("剑桥大学\n");break;
	case 8:printf("伦敦大学学院\n");break;
	case 9:printf("帝国理工学院\n");break;
	case 10:printf("芝加哥大学\n");break;
	case 11:printf("NTU\n");break;
	case 12:printf("NUS\n");break;
	case 13:printf("普林斯顿大学\n");break;
	case 14:printf("康奈尔大学\n");break;
	case 15:printf("宾夕法尼亚大学\n");break;
	case 16:printf("清华大学\n");break;
	case 17:printf("耶鲁大学\n");break;
	case 18:printf("哥伦比亚大学\n");break;
	case 19:printf("EPFL\n");break;
	case 20:printf("爱丁堡大学\n");break;
	default:printf("输入错误，请输入1-20的数\n");break;
		}
}
