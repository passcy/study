#include<stdio.h>
int main(void)
{
	int a,b,c,d;
	printf("输入一个三位数：");
	scanf("%d %d %d",&a,&b,&c);
	d=a;
	a=c;
	c=d;
	
	printf("%d%d%d\n",a,b,c);
	return 0; 
}
