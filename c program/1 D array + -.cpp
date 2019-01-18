#include<stdio.h>											
int main()
{
	int a[100],b[100],c[100],i,j,k,n,ch;
	printf("Enter the size\n");
	scanf("%d",&n);
	printf("Enter the elements in 1st array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the elements in 2nd array\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	printf("Press\n1 for Addition\n2 for Subtraction\n3for Multiplication\n4 for division\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Addition of two arrays are\n");
			for(i=0;i<n;i++)
			{
			c[i]=a[i]+b[i];
			printf("%d\n",c[i]);
		    }
			break;
		case 2:
			printf("Subtraction of two arrays are\n");
	    	for(i=0;i<n;i++)
	    	{
			c[i]=a[i]-b[i];
			printf("%d\n",c[i]);
		    }
			break;	
		case 3:
			printf("Multiplication of two arrays are\n");
		    for(i=0;i<n;i++)
		    {
			c[i]=a[i]*b[i];
			printf("%d\n",c[i]);
		    }
			break;	
		case 4:
			printf("Division of two arrays are\n");
		    for(i=0;i<n;i++)
		    {
			c[i]=a[i]/b[i];
			printf("%d\n",c[i]);
		    }
		    break;
		default:
		printf("Choice is not possible\n");	
	}
}
