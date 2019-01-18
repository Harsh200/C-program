#include<stdio.h>
int main()
{
	int a[100][100],n,i,j,s=0;
	printf("Enter the size\n");
	scanf("%d",&n);
	printf("Enter the elements in an array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j||i+j==n-1)
			{
				s+=a[i][j];
			}
		}
	}
	printf("Sum of diagonals are %d\n",s);	
}
