#include <stdio.h>

#define SIZE 5

int main()
{
    int i, j;
    int n = 1;
    int temp;
    int grade[SIZE][SIZE];

    /* Set Array */
    for(i=0; i<SIZE; i++)
        for(j=0; j<SIZE; j++)
            grade[i][j] = n++;
    
    /* Print Array */
    printf(" Before >> \n");
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf(" %02d", grade[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    /* Inverse Matrix Algorithm */
    for(i=0; i<SIZE; i++)
    {
        for(j=i+1; j<SIZE; j++)
        {
            temp = grade[i][j];
            grade[i][j] = grade[j][i];
            grade[j][i] = temp;
        }
    }
    
    
    /* Print Array */
    printf(" After >> \n");
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf(" %02d", grade[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}