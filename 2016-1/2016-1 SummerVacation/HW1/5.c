#include <stdio.h>

int main(){
    
    int i;
    int nValue;
    
    printf(" Input >> ");
    scanf("%d", &nValue);

    printf(" Result >> ");
    for(i=1; i<=nValue; i++){
        if(nValue%i == 0)
            printf("%d ", i);
    }
    printf("\n");

    
    return 0;
}