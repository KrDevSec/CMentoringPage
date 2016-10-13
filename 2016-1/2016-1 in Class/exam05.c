// exam05
#include <stdio.h>

int pow(int x, int y); 					/* x의 y제곱을 구하는 함수의 원형 */

int main(){
	int n, nCopy, i, cnt=0;
	
	printf("Input >> ");
	scanf("%d", &n);
	
	nCopy = n;					/* 원본 값이 변하지 않도록 값을 사본을 만들어 준다 */

	while(nCopy/=2)					/* (1) 2진법의 자릿수로 몇 자리까지 나오는지 체크한다. (소인수분해) */
		cnt++;
	
	printf(" Result >> ");

	for(i=cnt; i>=0; i--)				/* (2) 상위 비트에서부터 하위 비트까지 역으로... */
		printf("%d", (pow(2, i) & n)? 1 : 0);	/* (3) 그 비트가 존재하는지 추출하기 위해서 마스크 연산 */

	printf("\n");

	return 0;
}

int pow(int x, int y)
{
	/* x의 y제곱을 구하는 함수의 원형 */
	int i=0;

	int nResult=1;
	for(i=0; i<y; i++)
		nResult *= x;
	return nResult;
}
/*****************************************/
//
//	[ Console ]
//	 Input >> 10
//	 Result >> 1010
//	
/*****************************************/
