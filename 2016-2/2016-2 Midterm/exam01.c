#include <stdio.h>

int reverse(int n);

int main()
{
	int n;

	printf(" Input >> ");
	scanf("%d", &n);

	printf(" Result >> %d\n ", reverse(n) );

	return 0;
}

int reverse(int n)
{
	int i;
	int nResult = 0;
	
	while(1)
	{
		nResult += n%10;
		if (n/=10)
			nResult *= 10;
		else
			break;
	}
	return nResult;
}
