#include <stdio.h>

int Factorial(int n);
int main(){
    int n;
    
    printf(" Input >> ");
    scanf("%d", &n);
 
    printf(" Result >> %d\n", Factorial(n));
}
int Factorial(int n){
    if (n<=0)
        return 1;
    return Factorial(n-1) * n;
}