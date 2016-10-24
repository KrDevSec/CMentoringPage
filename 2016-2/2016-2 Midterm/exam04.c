#include <stdio.h>
#define SIZE 10

void PrintArr(int *arr, int size);
void arrncpy(int *dst, int *src, int size);
int arrncmp(int *dst, int *src, int size);
int main()
{
	int A[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int B[SIZE];

	printf(" A >> ");
	PrintArr( A, SIZE );
	
	arrncpy( B, A, SIZE );
	
	printf(" B >> ");
	PrintArr( B, SIZE );

	printf(" A, B >> %s", arrncmp(A, B, SIZE) ? "Not Equal.\n":"Equal.\n");
	
	return 0;
}
void PrintArr(int *arr, int size)
{
	int i;

	for(i=0; i<size; i++)
		printf("%d ", *(arr+i) );
	printf("\n");
}

void arrncpy(int *dst, int *src, int size)
{
	/* Copy */
	while(size--)
		*(dst+size) = *(src+size);

}
int arrncmp(int *dst, int *src, int size)
{
	int res = 0;
	while(size--)
		res = *(dst+size) - *(src+size);

	return res;
}
