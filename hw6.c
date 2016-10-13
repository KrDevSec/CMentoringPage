#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 16

int main()
{
    int i;
    int n = 0;
    int key;
    int low = 0, high = SIZE-1, mid;
    int cnt = 0, find = -1;
    int grade[SIZE];
    
    /* if find == -1 : not found, else value : searching success */
    
    srand ((unsigned)time(NULL));
    
    /* Set & Print Array */
    printf(" Items : ");
    for(i=0; i<SIZE; i++)
    {
        n = n + rand()%10+1 ;
        grade[i] = n;
        printf("%d ", grade[i]);
    }
    
    printf("\n Find Value : ");
    scanf("%d", &key);
    
    /* Binary Search Algorithm */
    while(low <= high)
    {
        mid = (low + high) / 2;
        
        if( grade[mid] < key )
            low = mid + 1;
        else if( grade[mid] > key )
            high = mid - 1;
        else if( grade[mid] == key )
        {
            find = mid;
            break;
        }
        cnt++; /* Number of Search Counting */
    }
    
    if ( find == -1 )
        printf(" Not Found...\n");
    else
        printf(" Index : %d\n Number of Search : %d\n", find, cnt);
    
    
    return 0;
}