#include <stdio.h>

#define MALE 1
#define FEMALE 0

typedef struct Human Human;
struct Human
{
	char szName[10];
	int year;
	int gender;
};

int main()
{
	Human aHuman;

	printf(" 이름 입력 : ");
	gets(aHuman.szName);
	printf(" 나이 입력 : ");
	scanf("%d", &aHuman.year);
	printf(" 성별 입력(남:1, 여:0) : ");
	scanf("%d", &aHuman.gender);

	printf(" ------------------------------ \n");
	printf(" 이름 : %s\n", aHuman.szName);
	printf(" 나이 : %d\n", aHuman.year);
	printf(" 성별 : %s\n", aHuman.gender ? "남" : "여");

	return 0;
}