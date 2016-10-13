#include <stdio.h>

int main(){
    
    int i;
    int nValue;
    int nResult = 0;    // init
    
    printf(" Input >> ");
    scanf("%d", &nValue);

    for(i=1; i<=nValue; i++)
        nResult += i;   // nResult = nResult + i;
    
    printf(" Result >> %d\n", nResult);

    
    return 0;
}