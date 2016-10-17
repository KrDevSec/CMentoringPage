#include <stdio.h>

int Factorial(int n);
double Euler(int n);
int main()
{
    int n;
    
    printf(" Input >> ");
    scanf("%d", &n);
    
    printf(" Result >> %lf\n", Euler(n));
    
    return 0;
}
int Factorial(int n)
{
    if ( n <= 0 )
        return 1;
    return n * Factorial(n-1);
}
double Euler(int n)
{
    if( n <= 0 )
        return 1.0;
    return Euler(n-1) + 1.0/Factorial(n);
}