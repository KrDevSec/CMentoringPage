#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 16

void GetNumber(int array[]);
void SelectionSort(int array[]);
void Swap(int *n1, int *n2);
void PrintArray(int array[]);

int main()
{
	int array[SIZE];

	GetNumber(array);

	printf(" Before >> \n");
	PrintArray(array);

	SelectionSort(array);

	printf(" After >> \n");
	PrintArray(array);

	return 0;
}

void GetNumber(int array[])
{
	int i;

	srand ((unsigned)time(NULL));

	for (i=0; i<SIZE; i++)
		array[i] = rand()%100+1;
}
void SelectionSort(int array[])
{
	int i, j, least;

	for (i=0; i<SIZE-1; i++)
	{
		least = i;
		for (j=i+1; j<SIZE; j++)
		{
			if ( array[j] < array[least] )
				least = j; 
		}

		Swap(&array[i], &array[least]);
	}

}
void Swap(int *n1, int *n2)
{
	int temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;

}
void PrintArray(int array[])
{
	int i;

	for ( i=0; i<SIZE; i++ )
		printf("%d ", array[i]);
	printf("\n");
}
