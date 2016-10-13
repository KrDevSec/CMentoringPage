#include <stdio.h>

int Round(double d);
int main(){
    
    double d;
    
    printf(" Input >> ");
    scanf("%lf", &d);

    printf(" Result >> %d\n", Round(d));

    return 0;
}
int Round(double d){
    return d+0.5;
}