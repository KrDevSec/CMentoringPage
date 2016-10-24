#include <stdio.h>
#define SIZE 2

void InputNumber(double array[SIZE][SIZE]);
void PrintArray(double array[SIZE][SIZE]);
double Determinant(double array[SIZE][SIZE]);
void InverseMatrix(double array[SIZE][SIZE], int D);
void Swap(double* n1, double* n2);
int main()
{
	double D;
	double matrix[SIZE][SIZE];

	InputNumber(matrix);
	printf(" Before >> \n");
	PrintArray(matrix);

	D = Determinant(matrix);

	if( D ) // D != 0
		InverseMatrix(matrix, D);
	else	// D == 0
	{
		printf("Determinant = 0\n");
		return -1;
	}
	printf(" After >> \n");
	PrintArray(matrix);

	return 0;
}
void InputNumber(double array[SIZE][SIZE])
{
	int i, j;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			printf(" (%d, %d) >> ", i, j);
			scanf("%lf", &array[i][j]);
		}
	}

}
void PrintArray(double array[SIZE][SIZE])
{
	int i, j;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			printf("%.2lf\t", array[i][j]);
		}
		printf("\n");
	}
}
double Determinant(double array[SIZE][SIZE])
{

	return array[0][0]*array[1][1] - array[0][1]*array[1][0];

}
void InverseMatrix(double array[SIZE][SIZE], int D)
{
	int i, j;

	if( D == 0 )
		return;

	/* Rotation and Sign */	
	Swap(&array[0][0], &array[1][1]);	// a<->d
	array[0][1] *= -1.0;	// sign
	array[1][0] *= -1.0;	// sign

	/* Determinant * Array Items... */
	for( i=0; i<SIZE; i++ )
		for ( j=0; j<SIZE; j++ )
			array[i][j] *= (1.0/D);
	

}

void Swap(double *n1, double *n2)
{
	/* Call by reference */
	double temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
