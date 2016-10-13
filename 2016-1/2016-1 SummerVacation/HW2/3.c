#include <stdio.h>

int Factorial(int n);
double Euler(int n);
int main(){
    int n;
    
    printf(" Input >> ");
    scanf("%d", &n);
    
    printf(" Result >> %lf\n", Euler(n));
}
int Factorial(int n){
    if (n<=0)
        return 1;
    return Factorial(n-1) * n;
}
double Euler(int n){
    if (n<=1)
        return 1.0;
    return Euler(n-1) + 1.0/Factorial(n-1);
}