#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

#define TRUE 1
#define FALSE 0

int IsBeing(int lotto[], int n, int key);
void Pick(int lotto[], int n);
void PrintLotto(int lotto[], int n);

int main()
{
    
    int i;
    int lotto[SIZE]={0};
    
    srand ((unsigned)time(NULL));
    
    for(i=0; i<SIZE; i++)
        Pick(lotto, i);
    
    PrintLotto(lotto, SIZE);
    
    return 0;
}

int IsBeing(int lotto[], int n, int key)
{
    /* n번째 추출되는 번호가 그 전까지 추출되었는지 반복문으로 검사 */
    /* 존재하면 IsBeing() 은 TRUE로, 아니면 FALSE를 반환한다. */
    int i;
    
    for(i=0; i<n; i++)
        if(lotto[i] == key) /* 혹시 찾으면? */
            return TRUE;    /* TRUE 값으로 반환 */
    
    return FALSE;           /* 다 돌고도 없으면 당현이 중복되지 않은 것 == FALSE 반환 */
}

void Pick(int lotto[], int n)
{
    /* 번호를 추출하는 부분 */
    int nTemp;
    
    do {
        /* 이미 존재하는지 체크하는 부분 */
        nTemp = rand()%45+1;    /* 번호를 먼저 난수로 뽑고 */
    } while( IsBeing(lotto, n, nTemp ) );
    /* 존재할 경우(IsBeing() == TRUE 일 경우) 다시 난수로 뽑게끔 설계 */
    
    lotto[n] = nTemp;   /* 그 값을 로또 배열에 저장 */
}

void PrintLotto(int lotto[], int n)
{
    /* 출력하는 부분 */
    int i;
    
    for(i=0; i<SIZE; i++)
        printf("%d ", lotto[i]);
    
    printf("\n");
}
