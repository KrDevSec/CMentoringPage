#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FACE	6
#define THROW	100000

int main(void)
{
	int i;
	int nDice[FACE] = { 0 };	// Initialize

	srand ((unsigned)time(NULL));

	for ( i = 0; i < THROW; i++ )	// Throw Dice
		nDice[rand()%6]++;
	
	for ( i = 0; i < FACE; i++ )	// Print Array
		printf(" [%d] : %d\n", i+1, nDice[i]);

	return 0;
}
