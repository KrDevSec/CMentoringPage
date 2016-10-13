#include <stdio.h>

int Factorial(int n);
int main(){
    
    int n;
    
    printf(" Input >> ");
    scanf("%d", &n);

    printf(" Result >> %d\n", Factorial(n));

    return 0;
}
int Factorial(int n){   // Generally, ...
    int i;
    int nResult=1;      // init
    
    for(i=1; i<=n; i++)
        nResult *= i;   // nResult = nResult * i;
    return nResult;
}

/*
int Factorial(int n){   // Recursive
    if (n <= 0)
        return 1;
    return n * Factorial(n-1);
}
*/