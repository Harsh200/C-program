#include<stdio.h>
int main()
{
	int a[100][100],m,n,i,j,c=0,d=0;
	printf("Enter the row & coloumb\n");
	scanf("%d%d",&m,&n);
	if(m!=n)
	{
		printf("Identity matrix not possible\n");
	}
	else
	{
	printf("Enter the elements in an array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);		
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j && a[i][j]==1)
			c++;
			else if(a[i][j]==0)
			d++;
		}
	}
	if(c==m || d==6)
	printf("Entered matrix in Identity matrix\n");
	else
	printf("Entered matrix in not Identity matrix\n");
    }
}
