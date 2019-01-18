#include<stdio.h>
int main()
{
	int a=5,b=10,c=15;
	int *arr[3]={&a,&b,&c};
	printf("%d",*arr[*arr[1]-8]);	
	}	
