#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 16
int SetArray(int items[]);
int PrintArray(int items[]);
int ChangeArray(int items[]);
int main()
{
	int items[SIZE];

	SetArray(items);
	printf(" Before >> ");
	PrintArray(items);
	
	ChangeArray(items);

	printf(" After >> ");
	PrintArray(items);

	return 0;
}
int SetArray(int items[])
{
	int i;

	srand ((unsigned)time(NULL));	// Set SEED

	for(i=0; i<SIZE; i++)
		items[i] = rand()%100+1;

}
int PrintArray(int items[])
{
	int i;

	for(i=0; i<SIZE; i++)
		printf("%d ", items[i]);
	printf("\n");
}
int ChangeArray(int items[])
{
	int i;

	for(i=0; i<SIZE; i++)
	{
		if( items[i] % 2 == 0 )	// It Is Even Number
			items[i] = items[i]/2;
		else					// It is Odd Number
			items[i] = items[i]*2;

	}
}