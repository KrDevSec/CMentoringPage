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

	// do-while�� while ��� ��, Input ���� 0���� �ְ� ���غ���
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