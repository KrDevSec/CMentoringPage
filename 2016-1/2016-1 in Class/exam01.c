#include <stdio.h>
// exam01
int main(){
	int i, j;
	for (i=0; i<10; i++)
	{
		if(i%2==0)
		{
			printf("*");
		}
		else
		{
			printf("*");
			for(j=0; i>j; j+=2)
				printf("**");
		}
		printf("\n");
	}
}

/*****************************************/
//
//	[ Console ]
//	*
//	***
//	*
//	*****
//	*
//	*******
//	...
//	
/*****************************************/