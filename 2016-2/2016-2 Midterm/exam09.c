#include <stdio.h>

void printValuable(int a, int b);
void Change(int *a, int *b);
int main()
{
	int a, b;

	printf(" Input >> ");
	scanf("%d%d", &a, &b);

	printf(" Before >> ");
	printValuable(a, b);

	Change(&a, &b);

	printf(" After >> ");
	printValuable(a, b);

}
void printValuable(int a, int b)
{
	printf("%d %d\n", a , b);
}
void Change(int *a, int *b)
{
	int i=0;
	int *p=0;
	p = a;

	for(i=0; i<2; i++, p++)
	{
		if( *p & 0x00000001 )	// ODD Number
			*p = *p >> 1;
		else			// Even Number
			*p = *p << 1;
	}
}

