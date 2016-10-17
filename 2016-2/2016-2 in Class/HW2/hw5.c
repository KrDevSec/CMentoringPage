#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 3
#define SIZE 4

int SetArray(int items[SIZE][SIZE]);
int PrintArray(int items[SIZE][SIZE]);
void RotationAlgorithm(int items[SIZE][SIZE]);

int main()
{
	int i;
	int items[SIZE][SIZE];

	SetArray(items);
	
	printf(" Before >> \n");
	PrintArray(items);

	for(i=0; i<COUNT; i++)
	{
		RotationAlgorithm(items);
	
		printf(" Rotation %d >> \n", i+1);
		PrintArray(items);
	}

	return 0;
}
int SetArray(int items[SIZE][SIZE])
{
	int i, j;
	int n = 1;

	srand ((unsigned)time(NULL));	// Set SEED

	for(i=0; i<SIZE; i++)
		for(j=0; j<SIZE; j++)
			items[i][j] = /* rand()%100; */ n++;

}
int PrintArray(int items[SIZE][SIZE])
{
	int i, j;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			printf(" %02d", items[i][j]);
		}
		printf("\n");
	}
	printf("------------\n");
}
void RotationAlgorithm(int items[SIZE][SIZE])
{
	int i, j;
	int tmp_items[SIZE][SIZE];

	/* Ready */
	for(i=0; i<SIZE; i++)
		for(j=0; j<SIZE; j++)
			tmp_items[i][j] = items[SIZE-1-j][i];

	/* Copy */
	for(i=0; i<SIZE; i++)
		for(j=0; j<SIZE; j++)
			items[i][j] = tmp_items[i][j];
}
