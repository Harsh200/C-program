#include<stdio.h>
int main()
{
	int a[3][3],i,j,max,min;
	printf("Enter the elements in an array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered Matrix is\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	max=a[0][0];
	min=a[0][0];
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
			else if(min>a[i][j])
			min=a[i][j];
		}
	}
	printf("%d is maximum\n%d is minimum",max,min);
}
