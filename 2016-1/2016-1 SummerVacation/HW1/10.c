#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROCK 0
#define SCISSOR 1
#define PAPER 2

int main(){
    
    int nHuman;
    int nCPU;
    
    printf(" Input (0:Rock, 1:Scissor, 2:Paper) >> ");
    scanf("%d", &nHuman);
    
    srand((unsigned)time(NULL));
    nCPU = rand()%3; // RANDOM
    
    switch(nCPU)
    {
        case ROCK:
            printf(" CPU : [ROCK] \n");
            break;
        case SCISSOR:
            printf(" CPU : [SCISSOR] \n");
            break;
        case PAPER:
            printf(" CPU : [PAPER] \n");
            break;
    }
    
        
        
    /* Result */
    printf(" Result >>");
    
    if( nHuman == nCPU )
        printf(" Draw.\n");
    else
    {
        switch(nHuman)
        {
            case ROCK:
                switch(nCPU)
                {
                case SCISSOR:
                    printf(" Win!\n");
                    break;
                case PAPER:
                    printf(" LOSE...\n");
                    break;
                }
                break;
            case SCISSOR:
                switch(nCPU)
                {
                case ROCK:
                    printf(" LOSE...\n");
                    break;
                case PAPER:
                    printf(" Win!\n");
                    break;
                }
                break;
            case PAPER:
                switch(nCPU)
                {
                case ROCK:
                    printf(" Win!\n");
                    break;
                case SCISSOR:
                    printf(" LOSE...\n");
                    break;
                }
                break;
            default:
                printf(" ERROR!\n");
                return 0;
        }
    }
    
    return 0;
}
