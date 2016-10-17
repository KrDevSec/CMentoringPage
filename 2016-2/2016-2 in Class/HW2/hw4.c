#include <stdio.h>


void Swap(int *px, int *py);
int main()
{
	int n1, n2;

	printf(" Input >> ");
	scanf("%d%d", &n1, &n2);
	printf(" Before >> %d, %d\n", n1, n2);
	Swap(&n1, &n2);
	printf(" After >> %d, %d\n", n1, n2);

	return 0;
}

void Swap(int *px, int *py)
{
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;

}