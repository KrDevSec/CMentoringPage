#include <stdio.h>
// exam03

int main(){
	int n;

	printf(" Input >> ");
	scanf("%d", &n);

	printf(" Result >> ");

	do {
		printf("%d", n%10);
	} while(n/=10);

	// do-while과 while 결과 비교, Input 값을 0으로 주고 비교해보기
	/*
	while(n){
		printf("%d", n%10);
		n/=10;
	}
	*/
	printf("\n");

	return 0;
}
/*****************************************/
//
//	[ Console ]
//	 Input >> 12345
//	 Result >> 54321
//	
/*****************************************/