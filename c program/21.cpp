#include<stdio.h>
int main()
{
	char a[]={'a','b','c','d','e','f','g','h'};
	char *p=a;
	++p;
	while(*p!='e')
	printf("%c",*p++);
}
