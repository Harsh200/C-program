#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=6;j++)
		{
			if(i==1&&j>=2&&j<=6||i==6&&j>=2&&j<=6||j==1&&i>=2&&i<6)
			{
			printf("*");
		    }
			else
			printf(" ");
		}
	printf("\n");
	}
}
