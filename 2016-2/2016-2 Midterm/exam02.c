#include <stdio.h>
#define SIZE 10
void PrintArr(int *arr, int size);
void SetInvert(int *arr, int* new, int size);
void SetSum(int *arr, int size, int *odd, int *even);
void DESCENDSort(int *org_arr, int *sort_arr, int size);
void Swap(int *px, int *py);

int main()
{
	int arr[SIZE] = { 10, 17, 3, 9, 27, 10, 8, 9, 13, 21 };
	int invert_arr[SIZE];
	int sort_arr[SIZE];
	int sumofEven = 0, sumofOdd = 0;

	SetSum( arr, SIZE, &sumofOdd, &sumofEven );

	printf(" Sum of Odd = %d\n", sumofOdd);
	printf(" Sum of Even = %d\n", sumofEven);
	printf(" Difference : %d\n", sumofEven - sumofOdd);

	printf(" Before >> ");
	PrintArr(arr, SIZE);

	SetInvert(arr, invert_arr, SIZE);
	printf(" Invert >> ");
	PrintArr(invert_arr, SIZE);
	
	DESCENDSort( arr, sort_arr, SIZE );

	printf(" Sorting (DESC) >> ");
	PrintArr( sort_arr /* arr */, SIZE);

	return 0;
}

void PrintArr(int *arr, int size)
{
	int i;

	for( i=0 ; i<size; i++ )
		printf("%d ", *(arr+i));
	printf("\n");
}
void SetInvert(int *org, int *new, int size)
{
	int i;

	for(i=0; i<size; i++)
		*(new+i) = *(org+size-1-i);

}
void SetSum(int *arr, int size, int *odd, int *even)
{
	int i;

	for( i=0; i<size; i++ )
		/* AND(&) Operation is faster than DIVID(/,%) Operation. */
		if( i & 0x1 /* i % 2 */ )	// odd
			*odd += *(arr+i);
		else				// even
			*even += *(arr+i);

}
void DESCENDSort(int *org_arr, int *sort_arr, int size)
{
	/* by DESCENDING ( n, n-1, ... 3, 2, 1 ) */
	int i, j;
	int max;

	for( i=0; i<size; i++ )
	{
		/* Find max number */
		max = i;

		for( j=i+1; j<size; j++)
		{
			if( *(org_arr+max) < *(org_arr+j) )
				max = j;
		}
		Swap( (org_arr+i), (org_arr+max) );	// Swap
		*(sort_arr+i) = *(org_arr+max);	// Copy
	}

}
void Swap(int *px, int *py)
{
	/* Call by reference */
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}
