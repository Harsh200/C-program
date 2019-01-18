#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if((i==1&&j<=6)||(i==4&&j<=6)||(i==7&&j<=6)||j==1||(j==7&&i>=2&&i<=3)||(j==7&&i>=5&&i<=6))
        	printf("*");
			else
			printf(" ");
		}
	printf("\n");
	}
}
