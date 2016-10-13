#include <stdio.h>

int Fibonacci(int n);
int main()
{
    int n;
    
    printf(" Input >> ");
    scanf("%d", &n);
    
    printf(" Result >> %d\n", Fibonacci(n));
    
    return 0;
}
int Fibonacci(int n)
{
    if(n <= 2)
        return n;
    return Fibonacci(n-1) + Fibonacci(n-2);
    
}