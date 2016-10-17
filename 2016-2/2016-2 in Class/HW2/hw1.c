#include <stdio.h>

void ShowQuad(int n);

int main()
{
	int n;

	printf(" Input >> ");
	scanf("%d", &n);

	printf(" Result >> ");
	ShowQuad(n);
	printf("\n");

	return 0;
}
void ShowQuad(int n)
{
	if ( n > 0 )
	{
		ShowQuad(n/4);
		printf("%d", n%4);
	}
}