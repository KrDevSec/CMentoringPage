#include <stdio.h>

int GetMax(int n1, int n2);
int main(){
    
    int n1, n2;
    
    printf(" Input >> ");
    scanf("%d%d", &n1, &n2);

    printf(" Result >> %d\n", GetMax(n1, n2));

    return 0;
}
int GetMax(int n1, int n2){
    if( n1 > n2 )
        return n1;
    return n2;
}