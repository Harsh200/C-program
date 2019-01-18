#include<stdio.h>
int main()
{
	int a=0;
	while(++a<10)
	{
		if(a<4&&a<9)
		continue;
		printf("%d\t",a);
	}
}
