#include <stdio.h>

int main(){
    
    int nValue;
    
    printf(" Input >> ");
    scanf("%d", &nValue);
    
    printf(" Result >> ");

    if ( nValue < 0 )       // if negative
        printf("It is negative number.\n");
    else if ( nValue == 0 ) // if zero
        printf("It is zero.\n");
    else                    // if positive
        printf("It is positive number.\n");
    
    return 0;
}