#include <stdio.h>

int main(){
    
    int i, j;
    int nValue;
    
    printf(" Input >> ");
    scanf("%d", &nValue);

    printf(" Result >> \n");
    for(i=0; i<nValue; i++){
        for(j=0; (i+j)<nValue; j++)
            printf("*");
        printf("\n");
    }

    
    return 0;
}