#include <stdio.h>

int Permutation(int n, int k);
int main()
{
	int n, k;

	printf(" P(n, k) \n");
	printf(" Input n, k >> ");
	scanf("%d%d", &n, &k);

	printf(" Result >> %d\n", Permutation(n, k));
	
	return 0;
}

int Factorial(int n)
{
	if( n <= 0 )
		return 1;
	return n * Factorial(n-1);

}
int Permutation(int n, int k)
{
	return Factorial(n) / Factorial(n-k);
}