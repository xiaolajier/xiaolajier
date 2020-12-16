#include<stdio.h>
int c(int x){
	if(x<=0){
		return 0;
	}
	return x+c(x-1);
}
void main(){
	int a;
	scanf("%d",&a);
	printf("%d\n",c(a));
}
