#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if((j>=1&&j<=6-i||j>=4+i&&j<=9)||(j>=1&&j<=i-4||j>=14-i&&j<=9))
			printf("*");
			else
			printf(" ");
		}
	printf("\n");
	}
}
