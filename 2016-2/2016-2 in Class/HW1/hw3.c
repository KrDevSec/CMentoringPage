#include <stdio.h>

int GCD(int n1, int n2);
int main()
{
    int n1, n2;
    
    printf(" Input >> ");
    scanf("%d%d", &n1, &n2);
    
    printf(" Result >> %d\n", GCD(n1, n2));
    return 0;
}
int GCD(int n1, int n2)
{
    return n2 ? GCD(n2, n1%n2) : n1 ;
}