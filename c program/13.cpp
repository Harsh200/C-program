#include<stdio.h>
int add(int);
int main()
{
	int i=3,k,l;
	k=add(++i);
	l=add(i++);
	printf("i=%d k=%d l=%d",i,k,l);
}
int add(int x)
{
	++x;
	return x;
}
