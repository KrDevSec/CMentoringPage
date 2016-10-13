#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 6

int main()
{
    int i, j, temp, least;
    int lotto[MAX];
    
    srand ((unsigned)time(NULL));
    
    /* Set Array */
    for(i=0; i<MAX; i++)
        lotto[i] = rand()%45+1;
    
    
    /* Selection Sort Algorithm */
    for(i=0; i<MAX-1; i++)
    {
        least = i;
        for(j=i+1; j<MAX; j++)
        {
            if( lotto[j] < lotto[least] )
                least = j;
        }
        
        temp = lotto[i];
        lotto[i] = lotto[least];
        lotto[least] = temp;
    }
    
    /* Print Array */
    printf(" Result >> ");
    for(i=0; i<MAX; i++)
        printf("%02d ", lotto[i]);
    printf("\n");
    
    return 0;
}