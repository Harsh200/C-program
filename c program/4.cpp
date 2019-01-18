#include<stdio.h>
int main()
{
	int a=5;
	switch(a)
	{
		case 1:
			printf("First");
		case 2:
		    printf("Second");
		case 3+2:
		    printf("Third");
		case 5:
		    printf("Final");
		break;	
	}
	return 0;
}
