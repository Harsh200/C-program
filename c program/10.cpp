#include<stdio.h>
int main()
{
	int x=10;
	switch(x)
	{
		default:x+=2;
		case 4:x=4;
		case 5:x++;
		break;
	}
	printf("%d",x);
}
