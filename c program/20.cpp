#include<stdio.h>
int main()
{
	int i=4;
	switch(i)
	{
		case 1:
			printf("This is case 1\n");
			break;
		default:
			printf("This is default\t");
		case 2:
			printf("This is case 2\t");
			break;
		case 3:
			printf("This is case 3\t");
	}
	return 0;
}
