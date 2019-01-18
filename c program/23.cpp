#include<stdio.h>
int main()
{
	int i=50;
	int *j=&i;
	printf("%d",++(*j));
}
