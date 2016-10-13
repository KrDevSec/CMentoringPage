#include <stdio.h>

#define MAX 5
int main()
{
    int i;
    int sum = 0;
    int grade[MAX];
    
    for(i=0; i<MAX; i++)
    {
        printf(" [%d] 수 입력 : ", i+1);
        scanf("%d", &grade[i]);
        sum += grade[i];
    }
    
    printf(" 모든 수의 합은 %d 입니다.\n", sum);
    
    
    return 0;
}