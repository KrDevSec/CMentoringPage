#include <stdio.h>

int Fibonacci(int n);
int main(){
    int i;
    int n;
    
    printf(" Input >> ");
    scanf("%d", &n);
 
    printf(" Result >> ");
    
    for(i=1; i<=n; i++)
        printf("%d ", Fibonacci(i));
    
    printf("\n");
    
    return 0;
}
int Fibonacci(int n){
    if (n<=2)
        return n;
    return Fibonacci(n-1) + Fibonacci(n-2);
}