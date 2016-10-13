#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ITEM 10  /* 10개의 원소 */

void PrintItem(int nItem[], int n);
void SelectionSort(int nItem[], int n);

int main(){
    int i;
    int nItem[ITEM] = {0};  // init
    
    srand((unsigned)time(NULL));
    
    for(i=0; i<ITEM; i++)
        nItem[i] = rand()%100+1; // range : 1 ~ 100 로 배열에 저장
    
    printf(" [*] Before >> ");  // 저장한 원소들을 출력해주고
    PrintItem(nItem, ITEM);
    
    SelectionSort(nItem, ITEM); // 정렬을 한 뒤에
    
    printf(" [*] After >> ");   // 다시 출력한다.
    PrintItem(nItem, ITEM);
    
    
    return 0;
}

void PrintItem(int nItem[], int n){
    /* 배열의 원소들을 출력만 해주는 함수 */
    int i;
    for(i=0; i<n; i++)
        printf("%d ", nItem[i]);
    printf("\n");
}

void SelectionSort(int nItem[], int n){
    /* 배열의 정렬(선택 정렬 알고리즘)을 담당하는 부분 */
    int i, j;
    int least;
    int nTemp;
    
    for(i=0; i<n-1; i++){
        least = i;  /* 최소값 알고리즘 준비 */
        for(j=i+1; j<n; j++){ /* 최소값 탐색 */
            if( nItem[least] > nItem[j] )
                least = j;
        }
        /* SWAP */
        nTemp = nItem[least];
        nItem[least] = nItem[i];
        nItem[i] = nTemp;
    }
}

