#include <stdio.h>
// exam04

#define YES 1
#define NO 0
int main(){
	int n;
	int IS_PRIME = NO;
	int i, j;
	int cnt=0;

	printf(" Input >> ");
	scanf("%d", &n);

	for(i=1; i<=n; i++)
		if( n % i == 0 )
			cnt++;

	if( cnt == 2 )
		IS_PRIME = YES;

	printf("%d %s prime number\n", n, ((IS_PRIME == YES)? "is" : "isn't") );


	return 0;
}
/*****************************************/
//
//	[ Console ]
//	 Input >> 23
//	 Result >> 23 is prime number.
//	
/*****************************************/