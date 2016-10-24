#include <stdio.h>

int GCD(int n1, int n2);
int LCM(int n1, int n2, int gcd);
int main(void)
{
	int x, y;
	int gcd, lcm;

	printf("Input >> ");

	scanf("%d%d", &x, &y);
	gcd = GCD(x, y);	// Get GCD
	lcm = LCM(x, y, gcd);	// Get LCM
	
	printf(" GCD : %d\n", gcd);
	printf(" LCM : %d\n", lcm);
	
	return 0;
}

int GCD(int n1, int n2)
{
	/***
	if( n2 == 0 )
		return n1;
	return GCD(n2, n1%n2);
	*/
	return n2 ? GCD(n2, n1%n2) : n1;
}
int LCM(int n1, int n2, int gcd)
{
	/*-----------------------------------------------
	| # Solution 
	|
	| A = aG, B = bG (a, b is prime, G is GCD)
	|
	| Common Denominator(CD) 
	|	= A * B 
	|	= abGG
	|
	| Least Common Denominator(LCD) 
	|	= NCD / GCD
	|	= A*B / GCD
	|	= abGG / G
	|	= abG
	|
	------------------------------------------------*/
	return n1 * n2 / gcd;
}
