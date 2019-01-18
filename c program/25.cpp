#include<stdio.h>
int main()
{
	int num=5,*p=&num,x=*p;
	printf("%d%d%d",++num,x+2,*p--);
}
