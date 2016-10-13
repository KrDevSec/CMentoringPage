#include <stdio.h>
// exam02

int main(){
	int i;
	int n;
	int nResult=0; // ÃÊ±âÈ­

	printf(" Input >> ");
	scanf("%d", &n);

	for(i=1; i<=n; i++)
		nResult += i;	// nResult = nResult + i
	printf(" Result >> %d\n", nResult);

	return 0;
}
/*****************************************/
//
//	[ Console ]
//	 Input >> 10
//	 Result >> 55
//	
/*****************************************/