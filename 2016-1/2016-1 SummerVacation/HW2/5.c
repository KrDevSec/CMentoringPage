#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIDE 6  // 6개의 면
#define THROW_COUNT 100000  // 10만번을 던진다!

int main(){
    int i;
    int nDice[SIDE] = {0};  // init
    
    srand((unsigned)time(NULL));
    
    for(i=0; i<THROW_COUNT; i++)
        nDice[rand()%SIDE]++;
    
    for(i=0; i<SIDE; i++)
        printf(" [%d] : %d\n", i+1, nDice[i]);

    return 0;
}
