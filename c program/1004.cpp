#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if((j>=1&&j<=i||j>=10-i&&j<=9)&&(j>=1&&j<=10-i||j>=i&&j<=9))
			printf("*");
			else
			printf(" ");
		}
	printf("\n");
	}
}
