#include <stdio.h>
#define SIZE 5

int main(){
    int i;
    int nScore[SIZE];
    int nSum = 0;
    int nAvg;
    
    for(i=0; i<SIZE; i++){
        printf(" [No.%d] Input >> ", i+1);
        scanf("%d", &nScore[i]);
        nSum+=nScore[i];    // nSum = nSum + nScore[i]
    }
    
    nAvg = nSum / SIZE;    // Get Average
    
    printf(" Total Sum : %d\n", nSum);
    printf(" Total Average : %d\n", nAvg);
    
    return 0;
}
