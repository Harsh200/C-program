#include<stdio.h>
static int y=1;
int main()
{
	static int z;
	printf("%d%d",y,z);
	return 0;
}
