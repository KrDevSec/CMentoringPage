#include <stdio.h>

void GetSUM_SUB(int x, int y, int *sum, int *sub);
int main()
{
	int n1, n2;
	int sum, sub;

	printf(" Input >> ");
	scanf("%d%d", &n1, &n2);

	GetSUM_SUB(n1, n2, &sum, &sub);

	printf(" SUM >> %d\n", sum);
	printf(" SUB >> %d\n", sub);

	return 0;
}
void GetSUM_SUB(int x, int y, int *sum, int *sub)
{
	/* Call by reference*/
	*sum = x + y;
	*sub = x - y;
}
