#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],d[10][10],k,i,j,r,c,m,n;
	printf("Enter the rows & coloumb of 1st matrix\n");
	scanf("%d%d",&r,&c);
	printf("Enter the rows & coloumb of 2nd matrix\n");
	scanf("%d%d",&m,&n);
	if(c!=m)
	{
		printf("Multiplication of 2 D Array is not possible\n");
	}
	else
	{
	printf("Enter the elements in 1st array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements in 2nd array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<n;j++)
		{
			d[i][j]=0;
			for(k=0;k<c;k++)
			{
				d[i][j]=d[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("Multiplication of 2 D Array is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
    }
}
