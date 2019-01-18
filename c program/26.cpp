#include<stdio.h>
int main()
{
	int array[2][3]={5,10,15,20,25,30};
	int (*ptr)[2][3]=&array;
	printf("%d\t",**(*ptr+1));
	printf("%d\t",*(*(*ptr+1)+2)); 
}
